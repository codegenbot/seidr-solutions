string words_in_sentence(string sentence){
    string result = "";
    int count = 1;
    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] == ' ' || i == sentence.length() - 1){
            string word = sentence.substr(count, i-count);
            if(isPrime(word.length())){
                result += word + " ";
            }
            count = i+1;
        }
    }
    return result;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}