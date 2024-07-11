string words_in_sentence(string sentence){
    string result = "";
    for(int i=0; i<sentence.size(); i++){
        int len = 1;
        for(int j=i+1; j<=sentence.size(); j++){
            if(j == sentence.size() || sentence[j] != ' ')
                len++;
            else
                break;
        }
        string word = sentence.substr(i, len);
        bool isPrime = true;
        for(int k=2; k*k <= len; k++){
            if(len % k == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            result += word + " ";
    }
    return result.substr(0, result.size()-1);
}