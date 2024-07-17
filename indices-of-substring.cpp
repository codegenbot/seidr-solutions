#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int pos = 0;
    while (pos < text.length()) {
        pos = text.find(target, pos);
        if (pos == string::npos) break;
        result.push_back(pos);
        pos += 1; // start searching from the next position
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> result = indicesOfSubstring(text, "hi");
    for (int i: result) cout << i << ' ';
    cout << endl;
    return 0;
}