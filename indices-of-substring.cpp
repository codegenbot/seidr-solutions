#include <vector>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string text;
    int numTargets;
    cin >> text >> numTargets;

    for (int i = 0; i < numTargets; ++i) {
        string target;
        cin >> target;
        vector<int> indices = indicesOfSubstring(text, target);
        for (int j : indices) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}