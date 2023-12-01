#include <iostream>
#include <vector>
#include <string>

std::vector<int> indices_of_substring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int text_length = text.length();
    int target_length = target.length();

    for (int i = 0; i <= text_length - target_length; i++) {
        bool found = true;
        for (int j = 0; j < target_length; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    std::getline(std::cin, text);
    std::getline(std::cin, target);
    std::vector<int> result = indices_of_substring(text, target);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    return 0;
}