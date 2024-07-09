#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += 1; // to avoid overlapping
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    for (int i = 0; i < n; ++i) {
        if (!i) {
            getline(cin, text);
        } else {
            string target;
            getline(cin, target);
            vector<int> result = indicesOfSubstring(text, target);
            cout << string(result.size(), '\n');
            for (int j : result) {
                cout << j << endl;
            }
        }
    }
    return 0;
}