bool issame(vector<string> a, vector<string> b);

vector<string> select_words(string s, int n){
    vector<string> result;
    if(s.empty()) return result;
    
    string word = "";
    int consonantCount = 0;
    
    for(char c : s){
        if(c != ' '){
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
                consonantCount++;
            }
            word += c;
        } else {
            if(consonantCount == n){
                result.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }
    
    if(consonantCount == n){
        result.push_back(word);
    }
    
    return result;
}

bool issame(vector<string> a, vector<string> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(select_words("a b c d e f", 1), vector<string>{"b", "c", "d", "f"}));
    
    return 0;
}