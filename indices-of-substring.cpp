#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        if (text.substr(i, target.length()) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string text;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> text;
        vector<int> res = indicesOfSubstring(text, text);
        for (int j : res) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}