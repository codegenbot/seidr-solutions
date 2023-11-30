vector<string> select_words(string s, int n){
    vector<string> result;
    string word;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            int consonants = 0;
            for(int j = 0; j < word.size(); j++){
                if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u'){
                    consonants++;
                }
            }
            if(consonants == n){
                result.push_back(word);
            }
            word = "";
        }
    }
    int consonants = 0;
    for(int j = 0; j < word.size(); j++){
        if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u'){
            consonants++;
        }
    }
    if(consonants == n){
        result.push_back(word);
    }
    return result;
}