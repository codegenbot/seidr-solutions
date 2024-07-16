string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(char c : sentence){
        if(c == ' '){
            if(is_prime(word.length())){
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if(is_prime(word.length())){
        result += word;
    }
    return result;
}