vector<string> words_string(string s){
    vector<string> words;
    string word;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ',' || s[i] == ' '){
            if(!word.empty()){
                words.push_back(word);
                word.clear();
            }
        } else {
            word += s[i];
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    return words;
}

bool issame(vector<string> a,vector<string>c){
    if(a.size() != c.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != c[i]){
            return false;
        }
    }
    return true;
}

int main() {
    vector<string> words_string(string s);
    assert (issame(words_string("ahmed     , gamal") , {"ahmed", "gamal"}));
    return 0;
}