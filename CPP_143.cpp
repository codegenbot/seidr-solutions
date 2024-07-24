string words_in_sentence(string sentence){
    string result = "";
    int len;
    for(int i=0; i<sentence.size(); i++){
        if(sentence[i] == ' '){
            continue;
        }
        len = 0;
        for(int j=i; j<sentence.size() && sentence[j] != ' '; j++){
            len++;
        }
        if(is_prime(len)){
            result += sentence.substr(i, len) + " ";
        }
        i = j;
    }
    return result.substr(0, result.size()-1);
}

bool is_prime(int n){
    if(n <= 1)
        return false;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}