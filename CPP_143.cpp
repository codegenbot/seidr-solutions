string words_in_sentence(string sentence){
    string result = "";
    int i=0;
    while(i<sentence.length()){
        int length = 0;
        for(int j=i; j<sentence.length() && sentence[j] != ' '; j++){
            length++;
            i++;
        }
        if(isPrime(length)){
            result += sentence.substr(0, length) + " ";
        }
        else{
            i--;
            while(i < sentence.length() && sentence[i] == ' ') i++;
        }
    }
    return result.substr(0, result.length()-1);
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i==0) return false;
    }
    return true;
}