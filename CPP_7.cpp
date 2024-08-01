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
    std::vector<std::string> strings = {"hello", "world", "hell", "goodbye"};
    std::string substring = "ell";
    std::vector<std::string> filtered_strings = filter_by_substring(strings, substring);

    if (issame(strings, filtered_strings)) {
        for (const auto& s : filtered_strings) {
            std::cout << s << std::endl;
        }
    } else {
        std::cout << "Strings are not the same." << std::endl;
    }

    return 0;
}