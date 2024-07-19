string words_in_sentence(string sentence){
    string result;
    string word;
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] != ' '){
            word += sentence[i];
        } 
        else {
            int word_length = word.length();
            bool is_prime = true;
            if(word_length <= 1){
                is_prime = false;
            } else {
                for(int j=2; j*j<=word_length; j++){
                    if(word_length % j == 0){
                        is_prime = false;
                        break;
                    }
                }
            }
            if(is_prime){
                result += word + " ";
            }
            word = "";
        }
    }
    int last_word_size = word.length();
    bool is_prime = true;
    if(last_word_size <= 1){
        is_prime = false;
    } else {
        for(int j=2; j*j<=last_word_size; j++){
            if(last_word_size % j == 0){
                is_prime = false;
                break;
            }
        }
    }
    if(is_prime){
        result += word;
    }
    return result;
}