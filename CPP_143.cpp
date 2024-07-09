string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; i<sentence.size(); i++){
        int j=i+1;
        while(j<=sentence.size() && !isalpha(sentence[j-1])){
            j++;
        }
        string word = sentence.substr(i, j-i);
        if(isPrime(word.length())){
            result += word + " ";
        }
        i=j-1;
    }
    return result.substr(0, result.size()-1);
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0) return false;
    }
    return true;
}