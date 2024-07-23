```cpp
#include <iostream>
#include <vector>
#include <string>

typename std::vector<std::size_t>::size_type gcd(typename std::vector<std::size_t>::size_type a, typename std::vector<std::size_t>::size_type b) {
    while (b != 0) {
        typename std::vector<std::size_t>::size_type temp = b;
        b = a % b;
        a = temp;
    }
    return std::min(a, b);
}

std::vector<typename std::vector<std::size_t>::size_type> indicesOfSubstring(std::string text, std::string target) {
    std::vector<typename std::vector<std::size_t>::size_type> result;
    typename std::vector<std::size_t>::size_type n = text.length();
    typename std::vector<std::size_t>::size_type m = target.length();

    for (typename std::vector<std::size_t>::size_type i = 0; i <= n - m; i++) {
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

    std::vector<typename std::vector<std::size_t>::size_type> result = indicesOfSubstring(text, target);
    std::cout << "Indices: ";
    for (typename std::vector<std::size_t>::size_type i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    typename std::vector<std::size_t>::size_type GCD = gcd((typename std::vector<std::size_t>::size_type)text.length(), (typename std::vector<std::size_t>::size_type)target.length());
    std::cout << "GCD of text and target: " << GCD << std::endl;
}