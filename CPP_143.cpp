string words_in_sentence(string sentence){
    string result = "";
    int count = 1;
    
    for(int i = 0; i < sentence.length(); i++){
        if(i == sentence.length() - 1 || sentence[i] == ' '){
            int length = i + 1 - count;
            bool is_prime = true;
            
            for(int j = 2; j * j <= length; j++){
                if(length % j == 0){
                    is_prime = false;
                    break;
                }
            }
            
            if(is_prime)
                result += (i > 0 ? " " : "") + sentence.substr(count, length);
            count = i + 1;
        }
    }
    
    return result;
}