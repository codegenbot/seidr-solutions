#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& v1, const std::vector<std::string>& v2) {
    if(v1.size() != v2.size()) return false;
    for(const auto& s : v1) {
        bool found = false;
        for(const auto& t : v2) {
            if(s == t) {
                found = true; break;
            }
        }
        if(!found) return false;
    }
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    std::vector<std::string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}

int main() {
    std::vector<std::string> v1 = {"apple", "banana", "cherry"};
    std::vector<std::string> v2 = {"banana", "cherry", "date"};
    if(issame(filter_by_substring(v1, "a"), filter_by_substring(v2, "a"))) {
        std::cout << "The two filtered vectors are the same.\n";
    } else {
        std::cout << "The two filtered vectors are not the same.\n";
    }
    return 0;
}