```cpp
#include <vector>
#include <iostream>

std::vector<int> computeLPSArray(const std::string& pat, std::vector<int>& lps, int len) {
    int m;
    lps.push_back(0); 
    m = 0; 

    for (int i = 1; i < pat.length(); i++) {
        while (m > 0 && pat[i] != pat[m-1]) { 
            m = m - 1; 
        }

        if (pat[i] == pat[m-1]) { 
            m++;
        } else {
            lps.push_back(m); 
        }
    }
}

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    std::vector<int> lps(m);
    computeLPSArray(target, lps, target.length());

    for (int i = 0; i < n - m + 1; i++) {
        int j = 0;
        while (j < m && text[i + j] == target[j]) {
            j++;
        }

        if (j == m) {
            result.push_back(i);
        } else {
            int k = lps[j-1];
            i = i + j - k; // move the start index of new substring
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