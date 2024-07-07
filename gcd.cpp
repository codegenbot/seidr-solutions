#include <iostream>
#include <vector>
#include <algorithm>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, __gcd(a, b));
}

std::vector<int> findIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += target.size();
    }
    
    return indices;
}

int main() {
    int a = 12;
    int b = 15; 
    std::cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << std::endl;

    std::string text = "banana";
    std::string target = "ana";
    
    std::vector<int> indices = findIndices(text, target);
    
    for (const auto& index : indices) {
        std::cout << index << " ";
    }
    
    return 0;
}