#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if (v1.size() != v2.size()) return false;
    for (const auto& s : v1) {
        if (std::find(v2.begin(), v2.end(), s) == v2.end()) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(string s : strings){
        if(s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    std::vector<std::string> v1 = {"apple", "banana", "cherry"};
    std::vector<std::string> v2 = {"banana", "date", "elderberry"};

    if (issame(filter_by_substring(v1, "an"), filter_by_substring(v2, "an"))) {
        std::cout << "The vectors contain the same strings.\n";
    } else {
        std::cout << "The vectors do not contain the same strings.\n";
    }

    return 0;
}