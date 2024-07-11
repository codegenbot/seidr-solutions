string words_in_sentence(string sentence){
    string result = "";
    int primeCount = 0;
    for(int i=2; i<=sentence.size(); i++){
        bool isPrime = true;
        if(i==2 || i==3) isPrime=true;
        else{
            for(int j=2; j*j<=i; j++){
                if(i%j == 0){
                    isPrime=false;
                    break;
                }
            }
        }
        if(isPrime){
            result += sentence.substr(0, i) + " ";
            primeCount++;
            sentence = sentence.substr(i);
            if(sentence.size() > 0) sentence = " " + sentence;
        }
    }
    return result.substr(0, result.size()-1);
}