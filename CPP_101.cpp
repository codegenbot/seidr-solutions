bool issame(vector<string> a, vector<string> b){
    // implementation of the issame() function
}

vector<string> words_string(string s){
    vector<string> words;
    string word;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(!word.empty()){
                words.push_back(word);
                word.clear();
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
    vector<string> result = words_string("ahmed, gamal");
    assert(issame(result, {"ahmed", "gamal"}));
    // other statements in the main function
    return 0;
}