```cpp
#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return b;
}

std::vector<std::string::size_type> indicesOfSubstring(std::string text, std::string target) {
    std::vector<std::string::size_type> result;
    std::string::size_type n = text.length();
    std::string::size_type m = target.length();

    for (std::string::size_type i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            while (i + m < n && text.substr(i, m) == target) { 
                i += m;
            }
            result.push_back(i); 
        }
    }

    return result;
}

int main() {
    std::cout << "GCD of 12 and 15: " << gcd(12, 15) << std::endl;
    std::string text = "Hello world";
    std::string target = "world";
    std::vector<std::string::size_type> indices = indicesOfSubstring(text, target);
    for (std::string::size_type index = 0; index < indices.size(); index++) {
        std::cout << "Target found at index: " << indices[index] << std::endl;
    }
    return 0;
}