```cpp
#include <vector>
#include <algorithm>
#include <iostream> 
#include <string>

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    std::string str1, str2;
    std::cout << "Enter the first string: ";
    std::cin >> str1;
    std::cout << "Enter the second string: ";
    std::cin >> str2;

    if (str1.empty() || str2.empty()) {
        std::cout << "Error: Both strings must be non-empty." << std::endl;
        return 1;
    }

    std::vector<int> result; 

    size_t pos = 0;
    while ((pos = str1.find(str2, pos)) != std::string::npos) {
        result.push_back(pos);
        ++pos;
    }

    if (result.size() == 0)
        return 0;

    int gcdResult = 1;
    for (int i : result) {
        gcdResult = std::__gcd(gcdResult, i); 
    }
        
    std::cout << "GCD of indices: " << gcdResult << std::endl; 
}