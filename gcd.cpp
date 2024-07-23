```cpp
#include <iostream>
#include <vector>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>

size_t gcd(boost::multiprecision::cpp_int a, boost::multiprecision::cpp_int b) {
    while (b != 0) {
        boost::multiprecision::cpp_int temp = b;
        b = a % b;
        a = temp;
    }
    return a.convert_to<size_t>();
}

std::vector<size_t> indicesOfSubstring(std::string text, std::string target) {
    std::vector<size_t> result;
    size_t n = text.length();
    size_t m = target.length();

    for (size_t i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            while ((i + m) <= n && text.substr(i, m) == target)
                i++; // Handle overlapping occurrences
        }
    }

    return result;
}

int main() {
    std::string text = "Hello World";
    std::string target = "World";
    std::vector<size_t> result;

    result = indicesOfSubstring(text, target);
    std::cout << "Indices: ";
    for (size_t i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    boost::multiprecision::cpp_int a = 909378243576;
    int b = 50; 
    std::cout << "GCD of " << a << " and " << b << ": " << gcd(a, static_cast<boost::multiprecision::cpp_int>(b)) << std::endl;

    return 0;
}