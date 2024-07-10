#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m + 1; ++i) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

vector<int> KMPLookup(string text, string pattern) {
    vector<int> lps = {0};
    int n = text.length();
    int m = pattern.length();

    for (int i = 1; i < m; ++i) {
        if (pattern[i] == pattern[lps.back()]) {
            lps.push_back(i);
        } else {
            if (!lps.empty()) {
                lps.pop_back();
                --i;
            } else {
                break;
            }
        }
    }

    vector<int> indices;

    for (int i = 0, j = 0; i < n; ++i) {
        while (j > 0 && text[i] != pattern[j]) {
            j = lps.back();
            lps.pop_back();
        }

        if (text[i] == pattern[j]) {
            ++j;
        }

        if (j == m) {
            indices.push_back(i - m + 1);
            --j;
        }
    }

    return indices;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> indices = KMPLookup(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}