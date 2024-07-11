string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=1; i<=100; i++){
        if(isPrime(i)){
            size_t pos = 0;
            while((pos = sentence.find(" ")) != string::npos){
                if(sentence.substr(0, pos).length() == i){
                    result += sentence.substr(0, pos) + " ";
                    sentence.erase(0, pos+1);
                    count++;
                    break;
                }
                else{
                    pos = sentence.find(" ", pos+1);
                }
            }
        }
    }
    return result;
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}