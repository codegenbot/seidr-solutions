#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int textLength = text.length();
    int targetLength = target.length();
    
    int i = 0;
    while (i <= textLength - targetLength) {
        int j = 0;
        bool found = true;

        while (j < targetLength) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
            j++;
        }

        if (found) {
            indices.push_back(i);
            i += targetLength;
        } else {
            i++;
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