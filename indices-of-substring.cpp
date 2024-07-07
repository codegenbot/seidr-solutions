#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    vector<int> lps(m); // Longest Prefix Suffix array
    int i = 0; 
    int j = 0; 

    calculateLPSArray(target, m, lps);

    for (int i = 0; i < n; i++) {
        if (target[j] == text[i]) {
            j++;
            i++;
        }
        if (j == m) { // target found
            result.push_back(i - j);
            j = lps[j - 1];
        } 
        else if (i < n && target[j] != text[i]) {
            if (j != 0) {
                j = lps[j - 1]; 
            }
            else i++;
        }
    }

    return result;
}

void calculateLPSArray(string target, int m, vector<int>& lps) {
    int length = 0; 

    lps[0] = 0; 

    for (int i = 1; i < m; i++) { 
        while (length > 0 && target[i] != target[length]) {
            length = lps[length - 1];
        }
        if (target[i] == target[length])
            length++;
        lps[i] = length;
    } 
}

int main() {
    string text;
    string target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}