#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size(), m = target.size();
    
    int i = 0, j = 0;
    while (i < n) {
        if (text[i] == target[j]) {
            i++;
            j++;
        }
        if (j == m) {
            result.push_back(i - j);
            j = 0; // Reset the pattern pointer
        }
        else if (i < n && text[i] != target[j]) {
            i = i - j + 1; // Mismatch, try to find the match at a different position
        }
    }
    
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> res = indicesOfSubstring(text, target);
    for (int x : res) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}