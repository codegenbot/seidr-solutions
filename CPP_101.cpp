vector<string> words_string(string s);

bool issame(vector<string> a, vector<string> b){
    return a == b;
}

int main(){
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    return 0;
}

vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for(char c : s){
        if(c == ' ' || c == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    return words;
}