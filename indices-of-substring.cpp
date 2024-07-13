```cpp
#include <vector>
#include <iostream>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    if (m > 0) {
        for (int i = 0; i + m - 1 < n; i++) { 
            int j = 0;
            while (j < m && i + j < n && text[i+j] == target[j]) {
                j++;
                if (j == m) {
                    result.push_back(i);
                    i = i + j - m; // Move the index forward so that the next search starts after the previous match.
                    j = 0;
                }
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    getline(std::cin, input);
    size_t textIndex = input.find(" ");
    std::string target = input.substr(0, textIndex);
    input.erase(0, textIndex + 1);
    std::string text = input;

    input.clear();
    input.resize(textIndex - textIndex - 1); // -1 to exclude the newline character
    getline(std::cin, input);
    target += input;

    std::vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}