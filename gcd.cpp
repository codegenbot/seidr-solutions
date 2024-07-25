#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int start = 0;
    
    while (start < text.size()) {
        size_t pos = text.find(target, start);
        
        if (pos != std::string::npos) {
            result.push_back(pos);
            start = pos + 1; // Move the start pointer to the next character
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