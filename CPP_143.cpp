string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    int length = 0;

    for(int i = 0; i < sentence.length(); i++){
        if(sentence[i] == ' ' || i == sentence.length()-1){
            if(i == sentence.length()-1){
                word += sentence[i];
            }
            length = word.length();

            bool isPrime = true;
            for(int j = 2; j <= length/2; j++){
                if(length % j == 0){
                    isPrime = false;
                    break;
                }
            }

            if(isPrime){
                result += word + " ";
            }

            word = "";
        }
        else{
            word += sentence[i];
        }
    }

    return result.substr(0, result.length()-1);
}