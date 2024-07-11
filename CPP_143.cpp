string words_in_sentence(string sentence){
    string result = "";
    int n = 0;
    for(int i=2; ; i++){
        bool is_prime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j == 0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime){
            n++;
            if(sentence.find(" ") != string::npos && i == strlen(&sentence[0] + sentence.find(" "))){
                result += &sentence[sentence.find(" ") + 1];
                sentence.erase(sentence.find(" "), n);
            } else if(i == strlen(&sentence[0])){
                result = sentence;
                return result;
            }
        }
    }
    return result;
}