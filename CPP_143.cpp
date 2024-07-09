string words_in_sentence(string sentence){
    string result = "";
    bool isPrime;
    for(int i=0; i<sentence.size();i++){
        if(sentence[i] == ' ') {
            continue;
        }
        int len = 0;
        while(i < sentence.size() && sentence[i] != ' '){
            i++;
            len++;
        }
        for(int j = 2; j <= sqrt(len); j++){
            if(len % j == 0) {
                isPrime = false;
                break;
            }else{
                isPrime = true;
            }
        }
        if(isPrime) {
            result += sentence.substr(0, len);
            i--;
            while(i < sentence.size() && sentence[i] != ' ') {
                i++;
            }
        }
    }
    return result;
}