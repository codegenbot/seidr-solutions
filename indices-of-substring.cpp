#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int len = target.size();
    for (int i = 0; i <= text.size() - len; i++) {
        bool found = true;
        for (int j = 0; j < len; j++) {
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
    string text;
    cin >> text;
    vector<int> res = indicesOfSubstring(text, text.substr(0, 1));
    for (int i:res) cout << i << " ";
    cout << endl;
    return 0;
}