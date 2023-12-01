#include <iostream>
#include <vector>
using namespace std;

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> indices;
    int target_length = target.length();
    int text_length = text.length();

    for (int i = 0; i <= text_length - target_length; i++) {
        bool found = true;
        for (int j = 0; j < target_length; j++) {
            if (text[i + j] != target[j]) {
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
    cin >> text >> target;
  
    vector<int> result = indicesOfSubstring(text, target);
  
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}