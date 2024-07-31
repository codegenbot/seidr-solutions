vector<string> select_words(string s, int n){
    vector<string> result;
    string word = "";
    int count = 0;
    
    for(int i=0; i<=s.length(); i++){
        if(i == s.length() || s[i] == ' '){
            int consonantCount = 0;
            for(char c : word){
                if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'){
                    consonantCount++;
                }
            }
            if(consonantCount == n){
                result.push_back(word);
            }
            word = "";
            count = 0;
        } else {
            word += s[i];
        }
    }
    
    return result;
}