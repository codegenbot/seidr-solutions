#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    int lenText = text.length();
    int lenTarget = target.length();
    
    if (lenTarget == 0) {
        for (int i = 0; i < lenText; i++) {
            result.push_back(i);
        }
        return result;
    }
    
    for (int i = 0; i <= lenText - lenTarget; i++) {
        int j;
        for (j = 0; j < lenTarget; j++) {
            if (text[i + j] != target[j]) {
                break;
            }
        }
        if (j == lenTarget) {
            result.push_back(i);
        }
    }
    
    return result;
}

int main() {
    std::string text, target;
    std::cin >> text >> target;
    
    std::vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
    
    return 0;
}