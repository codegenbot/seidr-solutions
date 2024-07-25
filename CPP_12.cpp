#include <initializer_list>
#ifndef __cpp_initializer_list
#include <vector>
#include <string>
#include <initializer_list>

std::string longest(const std::vector<std::string>& strings) {
    std::string result = strings[0];
    for (const auto& s : strings) {
        if (s.length() > result.length()) {
            result = s;
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

    std::cout << "The longest string is: " << longest(strings) << std::endl;

    return 0;
}
#endif