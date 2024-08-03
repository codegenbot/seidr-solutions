string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; i<sentence.size(); i++){
        if(i > 0 && sentence[i] == ' '){
            continue;
        }
        int len = 1;
        for(int j=i+1; j<=sentence.size() && j-i-1 <= 100; j++){
            if(sentence[j-1] != ' '){
                len++;
            } else {
                break;
            }
        }
        bool isPrime = true;
        for(int k=2; k*k <= len; k++){
            if(len % k == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            result += sentence.substr(i, len) + " ";
        }
        i+=len-1;
    }
    return result;
}