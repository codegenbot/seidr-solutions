```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) return false;
    for (int i = 0; i < str1.length(); ++i) {
        if (str1[i] != str2[i]) return false;
    }
    return true;
}

std::vector<std::string> sorted_list_sum(const std::vector<std::string>& lst) {
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
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> lst;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::cin >> str;
        if (!issame(str, "sum")) {
            lst.push_back(str);
        }
    }

    auto result = sorted_list_sum(lst);

    for (const auto& str : result) {
        std::cout << str << "\n";
    }

    return 0;
}