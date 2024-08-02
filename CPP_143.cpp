string words_in_sentence(string sentence){
    string result = "";
    int wordCount = 0;
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' '){
            continue;
        }
        if(i > 0 && sentence[i-1] == ' '){
            continue;
        }
        bool isPrime = true;
        int len = 0;
        while(i+len < sentence.length() && sentence[i+len] != ' '){
            len++;
        }
        string word = sentence.substr(i, len);
        for(int j=2; j*j <= len; j++){
            if(len % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            result += word + " ";
            wordCount++;
        }
    }
    return result.substr(0, result.length()-1);
}