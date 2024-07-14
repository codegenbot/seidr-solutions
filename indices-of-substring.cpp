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
    string text;
    int n;
    cin >> text >> n;
    vector<int> result = indicesOfSubstring(text, text.substr(0, n));
    for (int i : result) {
        cout << i << endl;
    }
    return 0;
}