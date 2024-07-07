string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' '){
            count++;
        }else{
            if(isPrime(strlen(&sentence[i]) - count)){
                result += &sentence[i];
                while (&sentence[i] != &sentence[i+1] && i < sentence.length() - 1) {
                    i++;
                }
            }
        }
    }
    return result;
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;
}