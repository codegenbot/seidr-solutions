#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int m = text.length();
    int n = target.length();
    
    for (int i = 0; i <= m - n; i++) {
        int j;
        for (j = 0; j < n; j++) {
            if (text[i + j] != target[j]) {
                break;
            }
        }
        
        if (j == n) {
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