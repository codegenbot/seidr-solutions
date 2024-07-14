#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int i = 0;
    while (i <= text.length() - target.length()) {
        if (text.substr(i, target.length()).compare(target) == 0) {
            result.push_back(i);
            i += target.length();
        } else {
            i++;
        }
    }
    return result;
}

int main() {
    string text;
    int t;
    cin >> text >> t;
    vector<int> res = indicesOfSubstring(text, text.substr(0, t));
    for (int x : res) {
        cout << x << endl;
    }
    return 0;
}