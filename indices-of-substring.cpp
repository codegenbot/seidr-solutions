#include <iostream>
#include <string>
#include <vector>

vector<int> findSubstringIndices(const string& text, const string& target) {
    vector<int> indices;
    int m = text.length();
    int n = target.length();
    
    for (int i = 0; i <= m - n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (text[i + j] != target[j])
                break;
        }
        if (j == n) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    string text, target;
    getline(cin, text);
    getline(cin, target);
    
    vector<int> indices = findSubstringIndices(text, target);
    
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }
    
    return 0;
}