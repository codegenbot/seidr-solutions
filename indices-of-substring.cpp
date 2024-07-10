#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (true) {
        int pos = text.find(target, start);
        if (pos == string::npos) break;
        indices.push_back(pos);
        start = pos + 1;
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> ans = findIndices(s, s.substr(0, n));
    for (auto x : ans) cout << x << " ";
    return 0;
}