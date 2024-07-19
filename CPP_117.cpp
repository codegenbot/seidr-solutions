bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> select_words(string s, int n);

int main() {
    vector<string> result = select_words("Hello world, welcome to coding", 3);
    vector<string> expected = {"world,", "coding"};
    
    assert(issame(result, expected));
    
    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string word = "";
    int count = 0;
    
    for (char c : s) {
        if (c == ' ') {
            if (count == n) {
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else if (isalpha(c)) {
            if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                count++;
            }
            word += c;
        }
    }
    
    if (count == n) {
        result.push_back(word);
    }
    
    return result;
}