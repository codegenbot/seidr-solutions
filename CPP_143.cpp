string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' ' || i == sentence.length()-1){
            if(i == sentence.length()-1){
                word += sentence[i];
            }
            if(is_prime(word.length())){
                result += word + " ";
            }
            word = "";
        } else {
            word += sentence[i];
        }
    }
    return result;
}