#include <vector>
using namespace std;

vector<int> findIndices(const string& text, const string& target) {
    vector<int> indices;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        bool found = true;
        for (int j = 0; j < target.size(); ++j) {
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
    string text;
    cin >> text;
    vector<int> indices = findIndices(text, n > 0 ? string(n, '0') : "");
    for (int i : indices) cout << i << endl;
    return 0;
}