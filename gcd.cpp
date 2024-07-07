```cpp
#include <iostream>
#include <vector>
#include <string>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else {
        int temp = gcd(b, a % b);
        while (a % temp != 0 && b % temp != 0) 
            temp--;
        return temp;
    }
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int pos = text.find(target);
    
    while (pos != std::string::npos) {
        result.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    
    return result;
}

int main() {
    int num1; 
    std::cout << "Enter first number: ";
    std::cin >> num1;

    int num2; 
    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << std::endl;
    
    std::string text; 
    std::cout << "Enter the text string: ";
    std::cin >> text;

    std::string target; 
    std::cout << "Enter the target string: ";
    std::cin >> target;

    auto indices = indicesOfSubstring(text, target);
    
    if (indices.size() > 0) {
        for(int i : indices)
            std::cout << i << " ";
    } else
        std::cout << "Target not found in the text." << std::endl;
    
    return 0;
}