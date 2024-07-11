string words_in_sentence(string sentence){
    string result = "";
    size_t start = 0;
    for(size_t i = 0; i < sentence.size(); i++){
        if(i == sentence.size() - 1 || !isalpha(sentence[i])){
            string word = sentence.substr(start, i - start);
            if(isPrime(word.size())){
                result += word + " ";
            }
            start = i + (i != sentence.size() - 1);
        }
    }
    return result.substr(0, result.size() - 1);
}

bool isPrime(int n) {
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}