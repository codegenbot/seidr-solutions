string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            if (is_prime(word.length())) {
                result += word + " ";
            }
            word = "";
        }
    }
    
    if (is_prime(word.length())) {
        result += word;
    }
    
    return result;
}