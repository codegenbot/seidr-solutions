#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int start = 0, end = -1, tempStart = 0;
    while (end < text.length() - target.length()) {
        if (text.substr(start, target.length()).compare(target) == 0) {
            end = start + target.length();
            tempStart = end + 1;
            result.push_back(tempStart);
        } else {
            start++;
            end = start + target.length() - 1;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    for (int i = 0; i < n; ++i) {
        if (i == 0)
            cin.ignore();
        getline(cin, text);
        string target;
        getline(cin, target);
        vector<int> result = indicesOfSubstring(text, target);
        cout << "[";
        for (auto it = result.begin(); it != result.end(); ++it) {
            cout << *it;
            if (next(it, 1) != result.end()) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
    return 0;
}