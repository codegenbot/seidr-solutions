#include <iostream>
#include <string>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int pos = text.find(target);
    while (pos != std::string::npos) {
        result.push_back(pos);
        pos = text.find(target, pos + 1);
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