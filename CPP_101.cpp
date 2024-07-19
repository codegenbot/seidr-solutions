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
    b = words_string("ahmed     , gamal");
    return a == b;
}

int main() {
    assert(issame(words_string("ahmed     , gamal") , {"ahmed", "gamal"}));
}