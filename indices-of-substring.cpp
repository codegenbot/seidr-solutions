#include <vector>
using namespace std;

vector<int> findIndices(const string& text, const string& target) {
    vector<int> indices;
    int targetLen = target.length();
    for (int i = 0; i <= text.length() - targetLen; i++) {
        bool found = true;
        for (int j = 0; j < targetLen; j++) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) indices.push_back(i);
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text, target;
    for (int i = 0; i < n; i++) {
        cin >> text >> target;
        vector<int> result = findIndices(text, target);
        for (int j : result) cout << j << " ";
        cout << endl;
    }
    return 0;
}