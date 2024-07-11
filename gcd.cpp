#include <iostream>
#include <string>
#include <vector>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    
    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += target.length() > 1 ? 1 : target.size();
    }

    return indices;
}

int main() {
    std::string text = "abracadabra";
    std::string target = "abra";
    std::vector<int> result = indicesOfSubstring(text, target);
    
    for (int index : result) {
        std::cout << index << " ";
    }
    
    return 0;
}