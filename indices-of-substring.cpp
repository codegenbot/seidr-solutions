```cpp
#include <iostream>
#include <vector>

std::vector<int> findIndices(std::string text, std::string target) {
    std::vector<int> indices;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
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
    std::cin >> text >> target;
    std::vector<int> result = findIndices(text, target);
    for (int i : result) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}