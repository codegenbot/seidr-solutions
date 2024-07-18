string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(auto c : sentence){
        if(c == ' '){
            if(is_prime(word.size())){
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if(is_prime(word.size())){
        result += word;
    }
    return result;
}