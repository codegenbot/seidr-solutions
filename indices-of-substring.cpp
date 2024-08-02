#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> res;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        int j = 0;
        while (j < target.size()) {
            if (text[i + j] != target[j]) break;
            j++;
        }
        if (j == target.size()) res.push_back(i);
    }
    return res;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the target string: ";
    cin >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}