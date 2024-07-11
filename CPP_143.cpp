string words_in_sentence(string sentence){
    string result = "";
    int n = 0;
    for(int i = 0; i < sentence.size(); i++){
        if(sentence[i] == ' '){
            n = 0;
        }else{
            n++;
        }
        bool is_prime = true;
        for(int j = 2; j * j <= n; j++){
            if(n % j == 0){
                is_prime = false;
                break;
            }
        }
        if(is_prime && n > 0){
            result += sentence.substr(i - n + 1, n) + " ";
        }
    }
    return result;
}