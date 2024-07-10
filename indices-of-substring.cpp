#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> computeLPSArray(string target) {
    int m = target.length();
    vector<int> lps(m, 0);

    if (m == 0) { 
        return {};
    }

    int length = 0;

    for (int i = 1; i < m; i++) {
        while (length > 0 && target[i] != target[length]) {
            length = lps[length - 1];
        }

        if (target[i] == target[length]) {
            length++;
        }

        lps[i] = length;
    }

    return lps;
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result = {};
    int n = text.length();
    int m = target.length();

    vector<int> lps = computeLPSArray(target);

    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m && text[i + j] == target[j]; j++)
            if (j == m - 1) result.push_back(i);
    }

    return result;
}

int main() {
    string text = "Hello World";
    string target = "World";
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}