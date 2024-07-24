```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> input;
    for(int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        input.push_back(s);
    }

    std::string substring;
    std::cin >> substring;

    std::vector<std::string> filtered = filter_by_substring(input, substring);

    if (issame(input, filtered)) {
        std::cout << "No strings contain the given substring." << std::endl;
    } else {
        for (const auto& str : filtered) {
            std::cout << str << std::endl;
        }
    }

    return 0;
}