```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::string& a, const std::string& b) {
    if (a.length() != b.length()) {
        return false;
    }
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] != b[i]) {
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
    std::vector<std::string> lst = {"abc", "def", "ghi", "jkl", "mno"};
    std::vector<std::string> res = sorted_list_sum(lst);
    for (const auto& str : res) {
        if (issame("abc", str)) {
            std::cout << "Found 'abc' at index: ";
            for (int i = 0; i < res.size(); ++i) {
                if (res[i] == str) {
                    std::cout << i;
                    break;
                }
            }
            std::cout << std::endl;
        }
    }
    return 0;
}