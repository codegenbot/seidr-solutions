#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += 1; // To avoid overlapping targets
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string s;
    getline(cin, s);

    vector<int> res = findIndices(s, s.substr(0, n));
    for (auto i : res) {
        cout << i << endl;
    }

    return 0;
}