bool issame(vector<string> a, vector<string> b){
    // function implementation
}

vector<string> words_string(string s){
    vector<string> words;
    string word;
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(!word.empty()){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    return words;
}

int main(){
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    // additional code
    return 0;
}