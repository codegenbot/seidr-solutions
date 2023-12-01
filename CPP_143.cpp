string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] != ' '){
            word += sentence[i];
        }
        else{
            int wordLength = word.length();
            bool isPrime = true;
            for(int j=2; j<=wordLength/2; j++){
                if(wordLength % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                result += word + ' ';
            }
            word = "";
        }
    }
    int wordLength = word.length();
    bool isPrime = true;
    for(int j=2; j<=wordLength/2; j++){
        if(wordLength % j == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        result += word + ' ';
    }
    return result;
}