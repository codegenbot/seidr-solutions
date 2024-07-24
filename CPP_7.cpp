```cpp
#include <iostream>
#include <vector>
#include <string>

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

int main() {
    int num_strings;
    std::cout << "Enter the number of strings: ";
    std::cin >> num_strings;

    std::vector<std::string> strings(num_strings);
    for (int i = 0; i < num_strings; ++i) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::cin >> strings[i];
    }

    std::string substring;
    std::cout << "Enter the substring: ";
    std::cin >> substring;

    auto filtered = filter_by_substring(strings, substring);
    for (const auto& str : filtered) {
        std::cout << str << "\n";
    }
    return 0;
}