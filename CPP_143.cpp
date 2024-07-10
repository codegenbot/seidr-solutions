string words_in_sentence(string sentence){
    string result = "";
    int primeCount = 0;
    for(int i=2; i<=1000000; i++){
        bool isPrime = true;
        for(int j=2; j*j <= i; j++){
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primeCount++;
            int pos = sentence.find(" ");
            while(pos != string::npos){
                string word = sentence.substr(0, pos);
                if(word.length() == i){
                    result += word + " ";
                }
                sentence.erase(0, pos+1);
                pos = sentence.find(" ");
            }
            break;
        }
    }
    return result;
}