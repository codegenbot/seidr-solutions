#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int idx = 0;
    while (idx <= text.length() - target.length()) {
        if (text.substr(idx, target.length()).compare(target) == 0) {
            result.push_back(idx);
            idx += target.length();
        } else {
            idx++;
        }
    }
    return result;
}

int main() {
    int n; cin >> n;
    string text; cin >> text;
    cout << "[";
    for (auto i: indicesOfSubstring(text, text.substr(0, 1))) {
        cout << i << " ";
    }
    cout << "]\n";

    return 0;
}