#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += 1; // Don't forget this line
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    for (int i = 0; i < n; ++i) {
        cin.ignore();
        getline(cin, text);
        if (i == 0)
            cout << text.size() - 1 << endl;
        else
            cout << endl;
        vector<int> indices = findIndices(text, target);
        for (int index : indices) {
            cout << index << " ";
        }
        cout << endl;
    }
    return 0;
}