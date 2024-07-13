#include <iostream>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    std::vector<int> lps(m);
    int k = 0;

    for (int i = 1; i < m; ) {
        if (target[i] == target[k]) {
            k++;
            lps[i] = k;
            i++;
        } else if (k != 0) {
            k = lps[k - 1];
        } else {
            i++;
        }
    }

    int i = 0, j = 0;

    while (i < n) {
        if (text[i] == target[j]) {
            i++;
            j++;
        }

        if (j == m) {
            result.push_back(i - j);
            j = lps[j - 1];
        } else if (i < n && text[i] != target[j]) {
            if (j != 0) {
                j = lps[j - 1];
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
    
    if(indices.empty())
        std::cout << "No matching found." << std::endl;
    else
        for (int i : indices) {
            std::cout << i << " ";
        }
    return 0;
}