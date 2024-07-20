```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    
    for (int i = 0; i < str1.length(); ++i) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return result;
}

int main() {
    std::vector<std::string> input;
    int num_strings;

    std::cout << "Enter the number of strings: ";
    std::cin >> num_strings;

    for (int i = 0; i < num_strings; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::cin >> str;
        input.push_back(str);
    }

    std::vector<std::string> output = sorted_list_sum(input);

    for (const auto& str : output) {
        bool same_found = false;

        for (int i = 0; i < num_strings; ++i) {
            if (issame(str, input[i])) {
                same_found = true;
                break;
            }
        }

        if (!same_found) {
            std::cout << str << " ";
        }
    }

    return 0;
}