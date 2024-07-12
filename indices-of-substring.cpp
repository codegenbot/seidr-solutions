vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    if (target.empty()) {
        for (int i = 0; i < text.length(); ++i) {
            result.push_back(i);
        }
        return result;
    }
    
    int textLen = text.length();
    int targetLen = target.length();
    
    for (int i = 0; i <= textLen - targetLen; ++i) {
        if (text[i] == target[0]) {
            bool isEqual = true;
            for (int j = 1; j < targetLen; ++j) {
                if (text[i + j] != target[j]) {
                    isEqual = false;
                    break;
                }
            }
            if (isEqual) {
                result.push_back(i);
            }
        }
    }
    
    return result;
}

int main() {
    string text, target;
    cin >> text >> target;
    
    vector<int> result = indicesOfSubstring(text, target);
    
    for (int i : result) {
        cout << i << " ";
    }
    
    return 0;
}