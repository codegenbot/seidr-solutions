#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    vector<int> lps(m); // Longest Proper Prefix which is also a Suffix
    int len = 0; 

    computeLPSArray(target, lps, len);

    int i = 0; 
    while (i < n) {
        if (text[i] == target[0]) { 
            if (target.length() == 1 || text.substr(i, m) == target) {
                result.push_back(i);
                i += m;
            } else {
                int j = 1; 
                while (i + j < n && text.substr(i, j) == target.substr(0, j)) { 
                    j++;
                }
                i += j;
            }
        } else {
            i = i + 1;
        }
    }

    return result;
}

void computeLPSArray(string pat, vector<int>& lps, int len) {
    lps[0] = 0; // empty prefix
    len = 0;

    for (int i = 1; i < pat.length(); i++) {
        while (len > 0 && pat[i] != pat[len]) { 
            len = lps[len - 1]; 
        }

        if (pat[i] == pat[len]) { 
            len++;
        } else {
            lps[i] = len; 
        }
    }
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
}