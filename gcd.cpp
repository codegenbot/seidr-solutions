#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int index = 0;
    
    while (index <= text.length() - target.length()) {
        size_t found = text.find(target);
        
        if (found != std::string::npos) {
            result.push_back(found);
            index = found + 1;
        } else {
            break;
        }
    }
    
    return result;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a = 12; 
    int b = 15;
    std::cout << "GCD: " << gcd(a, b) << std::endl;
    
    std::string text = "Hello world hello";
    std::string target = "hello";
    
    auto result = indicesOfSubstring(text, target);
    
    for (int index : result) {
        std::cout << "Index at which the target appears: " << index << std::endl;
    }
    
    return 0;
}