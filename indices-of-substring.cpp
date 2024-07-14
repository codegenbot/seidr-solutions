#include <vector>
using namespace std;

vector<int> find_indices(string text, string target) {
    vector<int> indices;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        if (text.substr(i, target.length()) == target)
            indices.push_back(i);
    }
    return indices;
}

int main() {
    int n;
    cin >> n;
    string text;
    getline(cin, text);
    string target;
    getline(cin, target);
    vector<int> res = find_indices(text, target);
    for (int i : res) {
        cout << i << endl;
    }
    return 0;
}