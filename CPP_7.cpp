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
    int num_strings;
    std::cout << "Enter the number of strings: ";
    std::cin >> num_strings;

    std::vector<std::string> input_strings(num_strings);
    for (int i = 0; i < num_strings; ++i) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, input_strings[i]);
    }

    std::string substring;
    std::cout << "Enter the substring: ";
    std::cin >> substring;

    std::vector<std::string> output = filter_by_substring(input_strings, substring);

    if (issame(output, input_strings)) {
        std::cout << "No strings contain the substring." << std::endl;
    } else {
        std::cout << "Strings containing the substring: ";
        for (const auto& str : output) {
            std::cout << str << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}