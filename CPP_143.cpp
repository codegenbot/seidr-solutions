string words_in_sentence(string sentence){
    string result = "";
    int len = 0;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' '){
            len = 0;
        }else{
            len++;
        }
        bool is_prime = true;
        for(int j = 2; j * j <= len; j++){
            if(len % j == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            result += sentence.substr(i - len + 1, len) + " ";
        }
    }
    return result;
}