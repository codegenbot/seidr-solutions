#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;
    std::string text;
    std::cin >> text;
    
    std::vector<int> indices = indicesOfSubstring(text, n == 1 ? "" : std::to_string(n).substr(1);
    for (int i : indices) {
        std::cout << i << " ";
    }
    return 0;
}