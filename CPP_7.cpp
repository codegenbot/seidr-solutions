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
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> strings(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, strings[i]);
    }

    std::string sub;
    std::cout << "Enter the substring to search: ";
    std::cin >> sub;

    std::vector<std::string> filtered = filter_by_substring(strings, sub);

    if (issame(strings, filtered)) {
        std::cout << "No strings contain the given substring." << std::endl;
    } else {
        std::cout << "Filtered strings: ";
        for (const auto& str : filtered) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}