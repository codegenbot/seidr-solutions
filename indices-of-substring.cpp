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
    int n;
    cin >> n;
    string text, target;
    for (int i = 0; i < n; i++) {
        getline(cin, text);
        if (i == 0) {
            target = text;
        } else {
            target = "";
            while (true) {
                cin >> target;
                if (!target.size()) break;
            }
        }
        vector<int> res = indicesOfSubstring(text, target);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}