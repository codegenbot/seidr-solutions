int is_bored(string S){
    int count = 0;
    string word, prev = "";
    
    for(char c : S){
        if(c == '.' || c == '!' || c == '?'){
            if(prev == "I")
                count++;
            prev = "";
        } else if(c != ' '){
            prev += c;
        }
    }
    
    return count;
}