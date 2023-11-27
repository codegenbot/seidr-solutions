string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    int wordLength = 0;

    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] != ' '){
            word += sentence[i];
            wordLength++;
        } else {
            bool isPrime = true;
            for(int j = 2; j <= wordLength / 2; j++){
                if(wordLength % j == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime){
                result += word + " ";
            }
            word = "";
            wordLength = 0;
        }
    }

    bool isPrime = true;
    for(int j = 2; j <= wordLength / 2; j++){
        if(wordLength % j == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        result += word + " ";
    }

    if(result.length() > 0){
        result.pop_back();
    }

    return result;
}