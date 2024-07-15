string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    int n = sentence.size();
    
    for(int i=0; i<=n; i++){
        if(i == n || sentence[i] == ' '){
            int word_length = word.size();
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
        } else {
            word += sentence[i];
        }
    }
    
    return result;
}