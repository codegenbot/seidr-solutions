```
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> issame(std::vector<std::string>, std::string);
std::vector<std::string> filter_by_substring(std::vector<std::string>, std::string);

int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> strings(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> strings[i];
    }
    std::string substring;
    std::cin >> substring;

    std::vector<std::string> result = filter_by_substring(strings, substring);

    for (const auto& s : result) {
        std::cout << s << "\n";
    }

    return 0;
}

std::vector<std::string> issame(std::vector<std::string>, std::string) {
    // Your code here
    return {};
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}