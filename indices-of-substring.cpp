#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    int start = 0;
    while (start < text.size()) {
        size_t pos = text.find(target, start);
        if (pos == string::npos) break;
        result.push_back(pos);
        start = pos + 1;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    string text;
    cin >> text;
    vector<int> res = indicesOfSubstring(text, text.substr(0, n));
    for (int i : res) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}