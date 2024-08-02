Here is the completed code:

string words_in_sentence(string sentence){
    string result = "";
    int i = 0;
    while(i < sentence.size()){
        int len = 0;
        for(int j = i; j < sentence.size(); j++){
            len++;
            if(!isalpha(sentence[j])){
                break;
            }
        }
        bool isPrime = true;
        for(int j = 2; j * j <= len; j++){
            if(len % j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) result += sentence.substr(i, len) + " ";
        i += len;
    }
    return result;
}