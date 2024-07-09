string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; i<sentence.size(); i++){
        if(i > 0) result += " ";
        int len = 0;
        while(i < sentence.size() && isalpha(sentence[i])){
            i++;
            len++;
        }
        if(len > 0){
            string word = sentence.substr(0, len);
            bool is_prime = true;
            for(int j=2; j*j <= len; j++){
                if(len % j == 0){
                    is_prime = false;
                    break;
                }
            }
            if(is_prime) result += word + " ";
        }
    }
    return result;
}