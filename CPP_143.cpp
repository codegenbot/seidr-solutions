string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    int wordLength = 0;
    
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] != ' '){
            word += sentence[i];
            wordLength++;
        }
        else{
            if(isPrime(wordLength)){
                result += word + " ";
            }
            word = "";
            wordLength = 0;
        }
    }
    
    if(isPrime(wordLength)){
        result += word;
    }
    
    return result;
}