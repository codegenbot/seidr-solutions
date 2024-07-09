#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int n = text.size();
    int m = target.size();

    int* lps = new int[m];
    int len = 0; // length of the previous longest prefix suffix.

    for (int i = 1; i < m; i++) {
        if (target[i] == target[len]) {
            len++;
            lps[i] = len;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
            }
        }
    }

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == target[j]) {
            j++;
            if (j == m) {
                indices.push_back(i);
                j = lps[j - 1];
            }
        }
    }

    delete[] lps;

    return indices;
}

int main() {
    int n;
    cin >> n;
    string text, target;
    cin >> text >> target;

    vector<int> result = findIndices(text, target);

    for(int i : result)
        cout << i << " ";
    
    return 0;
}