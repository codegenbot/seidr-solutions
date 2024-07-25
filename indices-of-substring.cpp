#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int start = 0;
    while (start < text.size()) {
        size_t found = text.find(target, start);
        if (found == string::npos) break;
        indices.push_back(found);
        start = found + 1;
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string str;
    getline(cin, str);
    vector<int> res = findIndices(str, str.substr(0, n));
    for (int i : res) cout << i << " ";
    cout << endl;
    return 0;
}