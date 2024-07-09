#include <iostream>
#include <vector>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.size();
    }
    return result;
}

int main() {
    int a, b;
    std::cout << "Enter two integers: ";
    std::cin >> a >> b;
    
    // Calculate GCD
    int gcdResult = gcd(a, b);

    std::string text;
    std::cout << "Enter the text string: ";
    std::getline(std::cin, text);
    std::string target;
    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);
    
    // Add code to solve the indices of substring problem
    std::vector<int> result = indicesOfSubstring(text, target);
    
    return 0;
}