#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int pos = text.find(target);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);
    vector<int> result = indicesOfSubstring(text, target);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}