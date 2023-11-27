vector<string> words_string(string s){
    vector<string> words;
    string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' ' || s[i] == ','){
            if(word != ""){
                words.push_back(word);
                word = "";
            }
        }
        else{
            word += s[i];
        }
    }
    if(word != ""){
        words.push_back(word);
    }
    return words;
}

bool issame(vector<string> a, vector<string> b){
    // Your implementation of 'issame' function goes here
    // Make sure to compare the input vectors 'a' and 'b'
    // and return the appropriate boolean value
    // Add missing variable declaration for 'b'
    // Fix the function signature as follows:
    // bool issame(vector<string> a, vector<string> &b)
    // where a and b are the input vectors to be compared
    return a == b;
}

int main(){
    assert(issame(words_string("ahmed     , gamal"), {"ahmed", "gamal"}));
    // Add more test cases if needed

    return 0;
}