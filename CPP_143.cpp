string words_in_sentence(string sentence){
    string result = "";
    int is_prime(int num){
        if(num < 2) return 0;
        for(int i=2; i*i<=num; i++){
            if(num % i == 0) return 0;
        }
        return 1;
    }
    string word = "";
    for(char c : sentence){
        if(c == ' '){
            if(is_prime(word.length())){
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if(is_prime(word.length())){
        result += word;
    }
    return result;
}