```cpp
#include <iostream>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    // Preprocess the target string to build the lps array
    std::vector<int> lps(m);
    lps[0] = 0;
    int lpIndex = 1;
    while (lpIndex < m) {
        if (target[lpIndex] == target[0]) {
            lps[lpIndex] = lpIndex + 1;
            break;
        }
        lpIndex++;
    }
    for (int lpIndex = 1; lpIndex < m; lpIndex++) {
        if (target[lpIndex] == target[lps[lpIndex - 1]]) {
            lps[lpIndex] = lps[lpIndex - 1] + 1;
        } else {
            lps[lpIndex] = lps[lpIndex - 1];
        }
    }

    // Search for the pattern in the text using KMP
    int i = 0, j = 0;

    while (i < n) {
        while (j < m && i + j < n && text[i + j] == target[j]) {
            j++;
        }
        if (j == m) {
            result.push_back(i);
            j = 0;
        } else {
            i += lps[j - 1];
            j = lps[j - 1];
        }
    }

    return result;
}

int main() {
    std::string text, target;

    while (text.empty()) {
        std::cout << "Enter a sentence: ";
        std::getline(std::cin, text);

        if (!text.empty())
            break;
    }

    while (target.empty()) {
        std::cout << "Enter the target string: ";
        std::getline(std::cin, target);

        if (!target.empty())
            break;
    }

    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    return 0;
}