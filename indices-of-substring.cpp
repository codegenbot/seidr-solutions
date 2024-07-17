#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; ++i) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    string text;
    int t;
    cin >> text >> t;

    vector<int> ans = indicesOfSubstring(text, text.substr(0, t));
    
    for (int i : ans)
        cout << i << " ";
    
    cout << endl;
}