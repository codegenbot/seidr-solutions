#include <vector>
#include <string>
#include <iostream>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    // Preprocess the target string to build the lps array
    std::vector<int> lps(m);
    int jTemp = 0;

    for (int i = 1; i < m; ) {
        if (target[i] == target[jTemp]) {
            jTemp++;
            lps[i] = jTemp;
            i++;
        } else if (jTemp != 0) {
            jTemp = lps[jTemp - 1];
        } else {
            i++;
        }
    }

    // Search for the pattern in the text using KMP
    int i = 0, jTemp = 0;

    while (i < n) {
        if (text[i] == target[jTemp]) {
            i++;
            jTemp++;
        }

        if (jTemp == m) {
            result.push_back(i - jTemp);
            jTemp = lps[jTemp - 1];
        } else if (i < n && text[i] != target[jTemp]) {
            if (jTemp != 0) {
                jTemp = lps[jTemp - 1];
            } else {
                i++;
            }
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