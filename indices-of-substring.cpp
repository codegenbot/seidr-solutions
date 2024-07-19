#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        if (text.substr(i, target.length()).compare(target) == 0) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string text;
    int n;
    cin >> text >> n;
    cout << "[";
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            cout << ", ";
        }
        vector<int> res = indicesOfSubstring(text, to_string(i));
        for (int j = 0; j < res.size(); j++) {
            cout << res[j];
            if (j < res.size() - 1) {
                cout << " ";
            }
        }
    }
    cout << "]";

    return 0;
}