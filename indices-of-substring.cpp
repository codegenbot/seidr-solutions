#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool match = true;
        for (int j = 0; j < target.size(); j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string text;
    int n;
    cin >> text >> n;
    vector<int> res = indicesOfSubstring(text, string(n, 'h'));
    for (auto i : res)
        cout << i << " ";
    return 0;
}