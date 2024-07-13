#include <iostream>
#include <vector>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    // Preprocess the target string to build the lps array
    std::vector<int> lps(m);
    lps[0] = 0;
    int i = 1;
    while (i < m) {
        if (target[i] == target[0]) {
            lps[i] = i + 1;
            break;
        }
        i++;
    }
    for (; i < m; i++) {
        if (target[i] == target[lps[i - 1]]) {
            lps[i] = lps[i - 1] + 1;
        } else {
            lps[i] = lps[i - 1];
        }
    }

    // Search for the pattern in the text using KMP
    int k = 0, j = 0;

    while (k < n) {
        if (text[k] == target[j]) {
            k++;
            j++;
        } else {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                k++;
            }
        }

        if (j == m) {
            result.push_back(k - j);
            k -= j;
            j = 0;
        }
    }

    return result;
}

int main() {
    std::string text, target;
    std::cout << "Enter the text: ";
    std::getline(std::cin, text);
    std::cout << "Enter the target string: ";
    std::getline(std::cin, target);
    std::vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        std::cout << i << " ";
    }
    return 0;
}