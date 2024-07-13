#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i <= text.size() - target.size(); ++i) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string text;
    cin >> text;
    string target;
    cin >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << endl;
    }
    return 0;
}