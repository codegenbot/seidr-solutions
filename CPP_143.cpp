string words_in_sentence(string sentence){
    string result = "";
    int i = 0;
    while(i < sentence.size()){
        int len = 1;
        for(int j = 2; j <= sentence[i]; ++j){
            if(sentence[i] % j != 0)
                break;
            len = j;
        }
        if(len > 1){
            result += sentence.substr(i, len) + " ";
            i += len;
        } else {
            i++;
        }
    }
    return result;
}