vector<string> select_words(string s, int n);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main() {
    assert (issame(select_words("a b c d e f", 1), {"b", "c", "d", "f"}));
    return 0;
}

vector<string> select_words(string s, int n) {
    vector<string> result;
    string current_word;
    int consonant_count = 0;
    
    for (char c : s) {
        if (c != ' ') {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                consonant_count++;
            }
            current_word += c;
        } else {
            if (consonant_count == n) {
                result.push_back(current_word);
            }
            current_word = "";
            consonant_count = 0;
        }
    }
    
    if (consonant_count == n) {
        result.push_back(current_word);
    }
    
    return result;
}