#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> res = indicesOfSubstring(s, n > 0 ? s.substr(0, n) : "");
    for (int i: res)
        cout << i << " ";
    return 0;
}