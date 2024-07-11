string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=0; i<sentence.size(); i++){
        if(sentence[i] == ' '){
            count++;
            continue;
        }
        bool is_prime = true;
        int len = 1;
        for(int j=i+1; j<=sentence.size() && sentence[j] != ' '; j++){
            len++;
            if(len > 2 && !is_prime(len)){
                break;
            }
        }
        if(len > 0){
            result += &sentence[i];
            i = j - 1;
        } else {
            count++;
        }
    }
    return result;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}