#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int textLen = text.length();
    int targetLen = target.length();
    
    for (int i = 0; i <= textLen - targetLen; i++) {
        bool found = true;
        for (int j = 0; j < targetLen; j++) {
            if (text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        
        if (found) {
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