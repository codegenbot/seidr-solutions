string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; i<sentence.size(); i++){
        int word_len = 0;
        while(i < sentence.size() && sentence[i] != ' ')
            i++, word_len++;
        if(word_len > 0 && isPrime(word_len))
            result += sentence.substr(i - word_len + 1, word_len) + " ";
    }
    return result;
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i=2; i*i<=n; i++)
        if(n%i == 0)
            return false;
    return true;
}