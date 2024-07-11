#include <vector>
#include <iostream>

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int textSize = text.length();
    int targetSize = target.length();

    for (int i = 0; i <= textSize - targetSize; i++) {
        bool isMatch = true;
        for (int j = 0; j < targetSize; j++) {
            if (text[i + j] != target[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    std::string text, target;
    int n;
    std::cin >> text >> n;
    std::getline(std::cin, target);

    std::vector<int> result = findIndices(text, target);

    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}