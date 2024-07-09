string words_in_sentence(string sentence){
    string result = "";
    int len = 0;
    for(int i=2; i<=100; i++){
        if(isPrime(i)){
            stringstream ss(sentence);
            string word;
            while(getline(ss, word, ' ')){
                if(word.length() == i) {
                    result += word + " ";
                    len++;
                }
            }
            if(len > 0) break;
        }
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