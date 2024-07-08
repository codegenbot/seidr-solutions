bool issame(vector<string> v1, vector<string> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    vector<string> words_string(string s) {
        vector<string> result;
        string word = "";
        for (char c : s) {
            if (c == ' ' || c == ',') {
                if (!word.empty()) {
                    result.push_back(word);
                    word = "";
                }
            } else {
                word += c;
            }
        }
        if (!word.empty()) {
            result.push_back(word);
        }
        return result;
    }
    vector<string> v1 = words_string(s);
    string s2;
    cin >> s2;
    vector<string> v2 = words_string(s2);
    cout << (issame(v1, v2) ? "Same" : "Not same") << endl;
    return 0;
}