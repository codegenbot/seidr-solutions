#include <vector>
#include <string>
#include <iostream>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while (pos != std::string::npos) {
        pos = text.find(target, pos);
        if (pos != std::string::npos) {
            result.push_back(pos);
            ++pos; 
        } else break;
    }
    return result;
}

int main() {
    std::string text = "J%R^G2WiuS*v)0sb";
    std::string target = "uS";
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    return 0;
}