```cpp
vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;

    int text_len = text.length();
    int target_len = target.length();

    for (int i = 0; i <= text_len - target_len; i++) {
        bool found = true;
        for (int j = 0; j < target_len; j++) {
            if (text[i+j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            result.push_back(i);
        }
    }
    
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> indices = indicesOfSubstring(text, target);

    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i];
        if (i < indices.size() - 1) {
            cout << " ";
        }
    }
    
    return 0;
}
```