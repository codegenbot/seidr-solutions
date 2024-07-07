string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; i<sentence.size(); i++){
        if(i > 0) result += " ";
        int len = 0;
        while(i < sentence.size() && isalpha(sentence[i])){
            i++;
            len++;
        }
        if(len > 1){
            bool isPrime = true;
            for(int j=2; j*j <= len; j++){
                if(len % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) result += sentence.substr(i-len, len);
        }
    }
    return result;
}