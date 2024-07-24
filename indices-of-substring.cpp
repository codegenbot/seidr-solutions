#include <vector>
using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> indices;
    int index = 0;
    while ((index = text.find(target)) != string::npos) {
        indices.push_back(index);
        if (index + target.length() < text.length()) {
            text = text.substr(index + target.length());
        } else {
            break;
        }
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> res = findIndices(s, s);
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}