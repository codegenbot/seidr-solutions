string words_in_sentence(string sentence){
    string result = "";
    int count = 0;
    for(int i=0; i<sentence.length(); i++){
        if(sentence[i] == ' '){
            count++;
        }
        else{
            if(count > 0){
                if(isPrime(stoi(&sentence[i-count]))){
                    result += &sentence[i-count];
                    while (&sentence[i] != &sentence[i-count]+1 && &sentence[i] != ' '){
                        i++;
                    }
                }
                count = 0;
            }
        }
    }
    return result;
}

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}