#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        } else if (i + m < n && text.substr(i, m) == target.substr(0, m)) {
            // found a match but not the full target
            int j = 1;
            while (j < m && i + j < n && text.substr(i, j) == target.substr(0, j)) {
                j++;
            }
            if (j == m) { // we've found the full target
                result.push_back(i);
            } else { // not a full match, try next position
                i += j;
            }
        }
    }

    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);

    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}