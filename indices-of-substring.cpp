#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += target.size();
    }
    return indices;
}

int main() {
    int numQueries;
    cin >> numQueries;

    for (int i = 0; i < numQueries; i++) {
        string text;
        cin >> text;
        string target;
        cin >> target;
        vector<int> result = findIndices(text, target);
        for (auto idx : result) {
            cout << idx << " ";
        }
        cout << endl;
    }

    return 0;
}