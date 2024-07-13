#include <iostream>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    // Preprocess the target string to build the lps array
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

    // Search for the pattern in the text using KMP
    int i = 0, j = 0;

    while (i < n) {
        if (text[i] == target[j]) {
            i++;
            j++;
        } else {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }

        if (j == m) {
            result.push_back(i - j);
            j = lps[j - 1];
        }
    }

    return result;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::cin >> text;
    std::cout << "Enter the target string: ";
    std::cin >> target;
    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    return 0;
}