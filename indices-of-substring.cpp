#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += 1; // to avoid overlapping
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    getline(cin, text);
    string target;
    getline(cin, target);
    vector<int> result = findIndices(text, target);
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}