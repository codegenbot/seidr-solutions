#include <vector>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        string text;
        cin >> n;
        text.resize(n);
        for(int i = 0; i < n; ++i) {
            cin >> text[i];
        }
        string target;
        cin >> n;
        target.resize(n);
        for(int i = 0; i < n; ++i) {
            cin >> target[i];
        }
        vector<int> res = indicesOfSubstring(text, target);
        for(auto x:res)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}