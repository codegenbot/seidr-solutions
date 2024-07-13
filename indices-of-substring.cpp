#include <vector>
#include <string>
#include <iostream>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i + m - 1 < n; i++) { 
        int j = 0;
        while (j < m && i + j < n && text[i+j] == target[j]) {
            j++;
        }
        if (j == m) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    std::string text = "abcabcabc";
    std::string target = "abc";
    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    return 0;
}