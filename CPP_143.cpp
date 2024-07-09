string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=0; i<sentence.size(); i++){
        if(sentence[i] == ' '){
            count++;
        }else{
            if(count > 0 && isPrime(count) == false){
                continue;
            }
            if(i == sentence.size() - 1 || sentence[i+1] == ' '){
                result += sentence.substr(count, i-count);
                count = 0;
            }
        }
    }
    return result;
}

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}