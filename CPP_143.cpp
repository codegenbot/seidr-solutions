string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=1; i<=100; i++){
        if(isPrime(i)){
            size_t pos = 0;
            while((pos = sentence.find(" ")) != string::npos){
                if(sentence.length() - (pos+1) <= i){
                    break;
                }
                result += sentence.substr(0, pos+i) + " ";
                sentence.erase(0, pos+i);
            }
            if(sentence.length() > 0)
                result += sentence + " ";
        }
    }
    return result;
}

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}