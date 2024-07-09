```
#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec) {
    if (vec.size() > 1) {
        for (size_t i = 0; i < vec.size(); ++i) {
            for (size_t j = i + 1; j < vec.size(); ++j) {
                if (vec[i] != vec[j]) {
                    return false;
                }
            }
        }
    } else {
        return true;
    }
    return true;
}

int main() {
    std::vector<std::string> strings;
    std::cout << "Enter number of strings: ";
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, str);
        strings.push_back(str);
    }
    std::cout << "All strings are same: " << (issame(strings) ? "True" : "False") << std::endl;
    return 0;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for (const auto& str : strings) {
        if(str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}