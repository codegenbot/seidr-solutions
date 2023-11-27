vector<string> select_words(string s,int n){
    vector<string> result;
    if(s.empty()){
        return result;
    }
    string word;
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else if(!word.empty()){
            int count = 0;
            for(int j=0; j<word.length(); j++){
                char ch = tolower(word[j]);
                if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
                    count++;
                }
            }
            if(count == n){
                result.push_back(word);
            }
            word = "";
        }
    }
    if(!word.empty()){
        int count = 0;
        for(int j=0; j<word.length(); j++){
            char ch = tolower(word[j]);
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u'){
                count++;
            }
        }
        if(count == n){
            result.push_back(word);
        }
    }
    return result;
}