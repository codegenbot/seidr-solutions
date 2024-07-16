#include <iostream>
#include <vector>
#include <string>

std::vector<int> findIndices(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != std::string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;

    std::string text = std::to_string(num1) + std::to_string(num2);

    std::string target;
    std::cin >> target;

    std::vector<int> result = findIndices(text, target);

    for (int idx : result) {
        std::cout << idx << " ";
    }

    return 0;
}