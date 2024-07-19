```cpp
vector<string> words_string(string s) {
    vector<string> result;
    string word = "";
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word.clear();
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

bool issame(vector<string> a, vector<string> b) {
    vector<string> b_copy = b; 
    sort(a.begin(), a.end());
    sort(b_copy.begin(), b_copy.end());
    return (a == b_copy);
}

int main() {
    assert(issame(words_string("ahmed     , gamal") , {"ahmed", "gamal"}));
}