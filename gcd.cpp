#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndices(const std::string &text, const std::string &target) {
    std::vector<int> indices;
    int pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    std::string text = "458376766960";
    std::string target = "766960";
    
    std::vector<int> result = findIndices(text, target);
    
    for (int i : result) {
        std::cout << i << " ";
    }
    
    // Calculate gcd
    int a = 458376;
    int b = 766960;
    int result_gcd = gcd(a, b);
    std::cout << "\nGCD: " << result_gcd;
    
    return 0;
}