vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    if (target.empty()) {
        for (int i = 0; i < text.size(); ++i) {
            indices.push_back(i);
        }
    } else {
        for (int i = 0; i <= text.size() - target.size(); ++i) {
            bool found = true;
            for (int j = 0; j < target.size(); ++j) {
                if (text[i + j] != target[j]) {
                    found = false;
                    break;
                }
            }
            if (found) {
                indices.push_back(i);
            }
        }
    }
    return indices;
}

int main() {
    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int index : result) {
        cout << index << " ";
    }
    return 0;
}