string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(int i = 0; i <= sentence.length(); i++){
        if(i == sentence.length() || sentence[i] == ' '){
            if(word.length() > 1){
                bool isPrime = true;
                for(int j = 2; j*j <= word.length(); j++){
                    if(word.length() % j == 0){
                        isPrime = false;
                        break;
                    }
                }
                if(isPrime){
                    result += word + " ";
                }
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }
    return result;
}