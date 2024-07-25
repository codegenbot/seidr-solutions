```cpp
#include <vector>
#include <string>

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

    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Werror"
    std::cout << "The longest string is: " << longest(strings) << std::endl;
    #pragma GCC diagnostic pop

    return 0;
}