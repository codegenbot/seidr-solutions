```cpp
#include <iostream>
#include <string>

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        std::string s = std::to_string(i);
        if ((s[0] == '1' || s[0] == 'o') || (s.back() == '1' || s.back() == 'l')) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Number of strings that start with or end with '1' or 'o' or 'l': " << starts_one_ends(n) << std::endl;
    return 0;
}