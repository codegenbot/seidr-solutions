#include <iostream>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    // Preprocess the target string to build the lps array
    std::vector<int> lps(m);
    lps[0] = 1; 
    for (int i = 1, j = 0; i < m; i++, j++) {
        if (target[i] == target[j]) {
            lps[i] = j + 1;
        } else {
            lps[i] = j;
            while (j > 0 && target[i] != target[j])
                j = lps[j - 1];
            if (i < m && i == target.length() - 1) break; 
            lps[i] = j;
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
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);
    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    return 0;
}