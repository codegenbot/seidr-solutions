Here is the completed code:

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
    vector<int> res = indicesOfSubstring(text, to_string(n));
    for (int i : res) {
        cout << i << endl;
    }
    return 0;
}