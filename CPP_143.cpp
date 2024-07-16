string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(char c : sentence){
        if(c != ' '){
            word += c;
        } else {
            if(word.length() > 1){
                bool isPrime = true;
                for(int i=2; i*i <= word.length(); i++){
                    if(word.length() % i == 0){
                        isPrime = false;
                        break;
                    }
                }
                if(isPrime){
                    result += word + " ";
                }
            }
            word = "";
        }
    }
    if(word.length() > 1){
        bool isPrime = true;
        for(int i=2; i*i <= word.length(); i++){
            if(word.length() % i == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            result += word;
        }
    }
    return result;
}