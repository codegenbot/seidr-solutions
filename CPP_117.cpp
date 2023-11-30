vector<string> select_words(string s, int n){
    vector<string> words;
    string word = "";
    int consonantCount = 0;
    
    for(int i = 0; i < s.length(); i++){
        char c = s[i];
        if(c == ' ' || i == s.length()-1){
            if(i == s.length()-1){
                word += c;
            }
            
            int wordConsonantCount = 0;
            for(int j = 0; j < word.length(); j++){
                char letter = tolower(word[j]);
                if(letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u'){
                    wordConsonantCount++;
                }
            }
            
            if(wordConsonantCount == n){
                words.push_back(word);
            }
            
            word = "";
        }
        else{
            word += c;
        }
    }
    
    return words;
}