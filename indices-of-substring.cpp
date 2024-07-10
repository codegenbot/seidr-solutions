Here is the solution:

#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += target.length();
    }
    return indices;
}

int main() {
    int numTexts;
    cin >> numTexts;
    for (int i = 0; i < numTexts; i++) {
        string text;
        cin >> text;
        string target;
        cin >> target;
        vector<int> result = findIndices(text, target);
        cout << "[";
        for (auto idx : result) {
            cout << idx;
            if (idx != result.back()) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
    return 0;
}