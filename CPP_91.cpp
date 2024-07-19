int is_bored(string S){
    int count = 0;
    string word = "";
    for(char c : S){
        if(c == '.' || c == '?' || c == '!'){
            if(word.length() > 0 && word[0] == 'I'){
                count++;
            }
            word = "";
        } else if(c != ' '){
            word += c;
        }
    }
    if(word.length() > 0 && word[0] == 'I'){
        count++;
    }
    return count;
}