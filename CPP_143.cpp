string words_in_sentence(string sentence){
    string result = "";
    int primeCount = 0;
    for(int i=2; i<=100; i++){
        bool isPrime = true;
        for(int j=2; j*j<=i; j++){
            if(i%j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            primeCount++;
            int start = 0, end = sentence.find(" ");
            while(end != -1){
                string word = sentence.substr(start, end-start);
                if(word.length() == i){
                    result += word + " ";
                    start = end + 1;
                    end = sentence.find(" ", start);
                } else {
                    start = end + 1;
                    end = sentence.find(" ", start);
                }
            }
        }
    }
    return result;
}