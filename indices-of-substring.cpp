#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (start < text.length()) {
        size_t pos = text.find(target, start);
        if (pos == string::npos) break;
        indices.push_back(pos);
        start = pos + 1;
    }
    return indices;
}

int main() {
    string text;
    int n;
    cin >> text >> n;
    vector<int> result = findIndices(text, text.substr(0, n));
    for (int i : result) cout << i << " ";
    cout << endl;
    return 0;
}