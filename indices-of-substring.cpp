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
    std::string text;
    getline(cin, text);
    std::string target;
    getline(cin, target);

    std::vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}