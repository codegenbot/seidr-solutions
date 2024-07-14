#include <vector>
#include <iostream>

std::vector<int> computeLPSArray(std::string pat, std::vector<int>& lps) {
    int m = 0; 

    for (int i = 1; i < pat.length(); i++) {
        while (m > 0 && pat[i] != pat[m-1]) { 
            m = m - 1; 
        }

        if (pat[i] == pat[m-1]) { 
            m++;
        } else {
            lps.push_back(m);
            m = 0;
        }
    }

    lps.push_back(m);

    return lps;
}

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result; // Initialize with 0 size
    int n = text.length();
    int m = target.length();

    std::vector<int> lps = computeLPSArray(target);

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == target[j]) {
            j++;
        }

        if (j == m) {
            result.push_back(i);
        } else if (j > 0) {
            j = lps[j-1];
            i = i + j; // move the start index of new substring
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