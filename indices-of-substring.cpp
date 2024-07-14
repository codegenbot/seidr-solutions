#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    // Your code here
    string text;
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> text;
        vector<int> res = indicesOfSubstring(text, text);
        for(auto x : res) cout << x << " ";
        cout << endl;
    }
    return 0;
}