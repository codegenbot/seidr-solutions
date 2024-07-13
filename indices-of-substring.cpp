#include <vector>
#include <iostream>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    if (m > 0) {
        for (int i = 0; i <= n - m; i++) { 
            int j = 0;
            while ((j < m) && (i + j < n) && (text[i+j] == target[j])) {
                if (j == m-1) {
                    result.push_back(i);
                    i++; // or j++, as you're looking for overlapping targets
                }
                j++;
            }
        }
    }

    return result;
}

int main() {
    std::string text;
    std::cin >> text;
    std::string target;
    std::cin >> target;

    std::vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}