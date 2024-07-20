string words_in_sentence(string sentence){
    string result = "";
    int length = 0;
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] == ' '){
            if(isPrime(length)){
                result += sentence.substr(0, length) + " ";
            }
            length = 0;
        } else {
            length++;
        }
    }
    if(isPrime(length)){
        result += sentence.substr(0, length);
    }
    return result;
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}