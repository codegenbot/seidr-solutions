string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] != ' '){
            word += sentence[i];
        } else {
            int word_length = word.length();
            bool is_prime = true;
            for(int j=2; j*j <= word_length; j++){
                if(word_length % j == 0){
                    is_prime = false;
                    break;
                }
            }
            if(is_prime && word_length > 1){
                result += word + " ";
            }
            word = "";
        }
    }
    int last_word_length = word.length();
    bool is_prime = true;
    for(int j=2; j*j <= last_word_length; j++){
        if(last_word_length % j == 0){
            is_prime = false;
            break;
        }
    }
    if(is_prime && last_word_length > 1){
        result += word;
    }
    return result;
}