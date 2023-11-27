string anti_shuffle(string s){
    string orderedString = "";
    string word = "";
    
    for(int i=0; i<s.length(); i++){
        if(s[i] != ' '){
            word += s[i];
        }
        else{
            sort(word.begin(), word.end());
            orderedString += word + ' ';
            word = "";
        }
    }
    
    sort(word.begin(), word.end());
    orderedString += word;
    
    return orderedString;
}