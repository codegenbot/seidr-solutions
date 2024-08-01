#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> res;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool match = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            res.push_back(i);
        }
    }
    return res;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}