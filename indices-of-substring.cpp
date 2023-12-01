#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    int textLen = text.length();
    int targetLen = target.length();
    
    for (int i = 0; i <= textLen - targetLen; i++) {
        bool match = true;
        for (int j = 0; j < targetLen; j++) {
            if (text[i + j] != target[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            result.push_back(i);
        }
    }
    
    return result;
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