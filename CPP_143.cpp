string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; i<sentence.size(); i++){
        int length = 0;
        while(i < sentence.size() && isalpha(sentence[i])){
            length++;
            i++;
        }
        if(isPrime(length)){
            result += sentence.substr(0, length) + " ";
            i--;
        } else {
            i--;
        }
    }
    return result.substr(0, result.size()-1);
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0)
            return false;
    }
    return true;
}