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

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;

    vector<int> indices = KMP(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

vector<int> KMP(string text, string target) {
    int n = text.length();
    int m = target.length();

    vector<int> lps(m, 0);
    int i = 1; // next value to fill in lps[]

    lps[0] = 0;

    while (i < m) {
        if (target[i] == target[lps[i - 1]]) {
            lps[i] = lps[i - 1] + 1;
            i++;
        } else if (lps[i - 1] > 0) {
            i = lps[i - 1];
        } else {
            i++;
        }
    }

    vector<int> indices;
    int j = 0; // next value to match in text
    i = 0; // index for target[]

    while (i < n) {
        if (text[i] == target[j]) {
            i++;
            j++;

            if (j == m) {
                indices.push_back(i - j);
                j = lps[j - 1];
            }
        } else if (j > 0) {
            j = lps[j - 1];
        } else {
            i++;
        }
    }

    return indices;
}