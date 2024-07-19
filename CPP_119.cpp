```cpp
#include <iostream>
#include <vector>
#include <string>

bool isMatched(const std::vector<std::string>& lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return open == close;
}

int main() {
    std::vector<std::string> lst;
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::string str;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, str);
        lst.push_back(str);
    }
    if (isMatched(lst))
        std::cout << "Yes";
    else
        std::cout << "No";
    return 0;
}