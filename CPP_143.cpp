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
            if(result.size() > 0){
                result += " ";
            }
            result += &sentence[i];
            count = 0;
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