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
    string text;
    cin >> text;
    cout << "[";
    for (char c : indicesOfSubstring(text, to_string(getline(cin, text)))[0]) {
        cout << c << " ";
    }
    cout << "]" << endl;

    return 0;
}