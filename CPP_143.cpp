string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=0; i<sentence.size(); i++){
        if(sentence[i] == ' '){
            count++;
        }
        else{
            if(count > 0 && isPrime(sentence.substr(0, i).size())){
                result += sentence.substr(0, i) + " ";
                count = 0;
            }
            else{
                count = 0;
            }
        }
    }
    return result.substr(0, result.size() - 1);
}

bool isPrime(int n){
    if(n <= 1)
        return false;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}