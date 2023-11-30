vector<string> select_words(string s,int n){
    vector<string> result;
    string word = "";
    bool inWord = false;

    for(int i=0; i<s.length(); i++){
        if(s[i] == ' '){
            if(word != ""){
                int consonantCount = 0;
                for(int j=0; j<word.length(); j++){
                    if(word[j] != 'A' && word[j] != 'E' && word[j] != 'I' && word[j] != 'O' && word[j] != 'U' && word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u'){
                        consonantCount++;
                    }
                }
                if(consonantCount == n){
                    result.push_back(word);
                }
            }
            word = "";
            inWord = false;
        }
        else{
            word += s[i];
            inWord = true;
        }
    }

    if(inWord && word != ""){
        int consonantCount = 0;
        for(int j=0; j<word.length(); j++){
            if(word[j] != 'A' && word[j] != 'E' && word[j] != 'I' && word[j] != 'O' && word[j] != 'U' && word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u'){
                consonantCount++;
            }
        }
        if(consonantCount == n){
            result.push_back(word);
        }
    }

    return result;
}