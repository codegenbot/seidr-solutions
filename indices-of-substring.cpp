#include <vector>
#include <iostream>

std::vector<int> computeLPSArray(std::string pat, std::vector<int>& lps, int len) {
    int m;
    lps[0] = 0; 
    m = 0; 

    for (int i = 1; i < pat.length(); i++) {
        while (m > 0 && pat[i] != pat[m-1]) { 
            m = lps[m - 1]; 
        }

        if (pat[i] == pat[m-1]) { 
            m++;
        } else {
            lps[i] = m; 
        }
    }
}

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result; // Initialize with 0 size
    int n = text.length();
    int m = target.length();

    std::vector<int> lps(m); // Longest Proper Prefix which is also a Suffix
    computeLPSArray(target, lps, target.length());

    for (int i = 0; i < n - m + 1; i++) {
        int j = 0;
        while (j < m && text[i + j] == target[j]) {
            j++;
        }

        if (j == m) {
            result.push_back(i);
        } else {
            if (j < m) {
                i = i + j - lps[j-1]; // move the start index of new substring
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
}