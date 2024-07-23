#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.size(), m = target.size();
    
    for (int i = 0; i <= n - m) {
        if (text.substr(i, m) == target)
            result.push_back(i);
        
        // KMP search
        int j = 0, k = 0;
        while (i + j < n && k < m && text[i + j] == target[k]) {
            j++, k++;
            if (k == m) {
                k = 0;
                i += j; // move to the next occurrence
                break;
            }
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