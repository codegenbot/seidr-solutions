string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(int i = 0; i <= sentence.size(); i++){
        if(i == sentence.size() || sentence[i] == ' '){
            int word_length = word.size();
            bool is_prime = true;
            if(word_length <= 1){
                is_prime = false;
            } else {
                for(int j = 2; j*j <= word_length; j++){
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
        } else {
            word += sentence[i];
        }
    }
    return result;
}