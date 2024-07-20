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
         [](const std::string& a, const std::string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });

    return result;
}

int main() {
    std::vector<std::string> input_list = {"hello", "world", "abc", "abcd", "abcc"};
    std::vector<std::string> output_list;

    for (const auto& str : input_list) {
        if (issame(str, "hello")) {
            output_list = sorted_list_sum(input_list);
            break;
        }
    }

    for (const auto& str : output_list) {
        std::cout << str << " ";
    }
    return 0;
}