vector<string> select_words(string s,int n){
    vector<string> result;
    string word = "";
    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            int consonant_count = 0;
            for(int j=0; j<word.length(); j++){
                if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u'){
                    consonant_count++;
                }
            }
            if(consonant_count == n){
                result.push_back(word);
            }
            word = "";
        }
        else{
            word += s[i];
        }
    }
    int consonant_count = 0;
    for(int j=0; j<word.length(); j++){
        if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u'){
            consonant_count++;
        }
    }
    if(consonant_count == n){
        result.push_back(word);
    }
    return result;
}