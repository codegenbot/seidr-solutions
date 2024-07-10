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
        if (found) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    string text;
    int numTargets;
    cin >> text >> numTargets;
    for (int i = 0; i < numTargets; ++i) {
        string target;
        cin >> target;
        vector<int> indices = findIndices(text, target);
        for (int idx : indices) {
            cout << idx << " ";
        }
        cout << endl;
    }
    return 0;
}