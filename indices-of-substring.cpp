#include <vector>
#include <iostream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i + m <= n; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
            // Check for overlapping targets
            while (i + m <= n && text.substr(i, m) == target) {
                i++; // increment the starting index to avoid duplicates
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