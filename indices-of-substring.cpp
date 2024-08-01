#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
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
    int n, m;
    cin >> n;
    string text;
    for (int i = 0; i < n; i++) {
        cin >> m;
        getline(cin, text);
        vector<int> res = indicesOfSubstring(text, text.substr(0, m));
        for (int i : res) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}