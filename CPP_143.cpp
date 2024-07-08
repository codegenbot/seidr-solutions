std::string words_in_sentence(std::string sentence) {
    std::string result = "";
    for(int i=0; i<sentence.length(); i++){
        int len = 0;
        while(i < sentence.length() && sentence[i] != ' ') i++;
        std::string word = sentence.substr(0, i);
        for(int j=2; ;j++){
            bool isPrime = true;
            for(int k=2; k*k <= j; k++){
                if(j % k == 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime && len + word.length() > 0) {
                result += word + " ";
                len = 0;
            }
            if(len + word.length() > 0) len++;
        }
    }
    return result.substr(0, result.length()-1);
}