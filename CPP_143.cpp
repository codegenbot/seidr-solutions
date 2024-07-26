string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    int length = 0;
    
    for(char c : sentence){
        if(c == ' '){
            if(is_prime(length)){
                result += word + " ";
            }
            word = "";
            length = 0;
        } else {
            word += c;
            length++;
        }
    }
    
    if(is_prime(length)){
        result += word;
    }
    
    return result;
}