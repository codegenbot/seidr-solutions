#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
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
    string text;
    int n;
    cin >> text >> n;

    vector<int> res = indicesOfSubstring(text, text.substr(0, n));
    for (auto i : res)
        cout << i << " ";
    cout << endl;

    return 0;
}