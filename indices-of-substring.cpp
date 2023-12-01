vector<int> getIndicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int lenText = text.length();
    int lenTarget = target.length();
    
    for (int i = 0; i <= lenText - lenTarget; i++) {
        bool isMatch = true;
        for (int j = 0; j < lenTarget; j++) {
            if (text[i+j] != target[j]) {
                isMatch = false;
                break;
            }
        }
        if (isMatch) {
            indices.push_back(i);
        }
    }
    
    return indices;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> indices = getIndicesOfSubstring(text, target);
    
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }
    
    return 0;
}