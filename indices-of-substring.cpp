#include <vector>
#include <iostream>
using namespace std;

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

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    computeLPSArray(target, result, m); // Pass the result vector to computeLPSArray

    int len = 0; 
    for (int i = 0; i < n) { 
        while (len > 0 && text[i] != target[len]) { 
            len = result[len - 1]; 
        }

        if (text[i] == target[len]) { 
            len++;
            if (len == m) { 
                result.push_back(i - m + 1); // Adjust the index to match the problem description
                i += len;
                len = result[result.size() - 1]; 
            }
        } else {
            if (len > 0) { 
                len = result[len - 1]; 
            } else {
                i++;
            }
        }
    }

    return result;
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