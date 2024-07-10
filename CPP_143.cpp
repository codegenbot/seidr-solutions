string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=1; i<=100; i++){
        if(isPrime(i)){
            size_t pos = 0;
            while((pos = sentence.find(' ', pos)) != string::npos){
                string word = sentence.substr(0, pos);
                if(word.length() == i){
                    result += word + " ";
                    count++;
                    sentence.erase(0, pos+i-1);
                }
                else{
                    break;
                }
            }
        }
    }
    return result;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}