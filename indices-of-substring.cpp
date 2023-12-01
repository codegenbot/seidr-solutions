#include <vector>
#include <iostream>
#include <string>

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();
    
    for (int i = 0; i <= textLen - targetLen; i++) {
        if (text.substr(i, targetLen) == target) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    string text, target;
    cin >> text >> target;

    vector<int> result = indicesOfSubstring(text, target);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}