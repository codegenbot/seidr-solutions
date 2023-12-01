#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int textLength = text.length();
    int targetLength = target.length();
    
    for (int i = 0; i <= textLength - targetLength; i++) {
        int j;
        for (j = 0; j < targetLength; j++) {
            if (text[i + j] != target[j]) {
                break;
            }
        }
        if (j == targetLength) {
            indices.push_back(i);
        }
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