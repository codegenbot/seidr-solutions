```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
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
    std::vector<std::string> lst = {"A", "B", "C", "D"};
    std::cout << "Sorted list: ";
    for (const auto& str : sorted_list_sum(lst)) {
        std::cout << str << " ";
    }
    std::cout << std::endl;
    return 0;
}