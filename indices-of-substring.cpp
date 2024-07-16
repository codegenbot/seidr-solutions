```
#include <iostream>
#include <sstream>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    int textSize = text.length();
    int targetSize = target.length();

    for (int i = 0; i <= textSize - targetSize; ++i) {
        bool found = true;
        for (int j = 0; j < targetSize; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> indices = indicesOfSubstring(text, text.substr(0, 1));
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}