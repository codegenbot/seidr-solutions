string words_in_sentence(string sentence){
    string result = "";
    int n = 0;
    for(int i=2; ;i++){
        if(isPrime(i)) break;
        n++;
    }
    vector<string> prime_words;
    string word;
    for(size_t i=0; i<sentence.size(); i++){
        if(sentence[i] == ' '){
            if(isPrime(word.size())){
                prime_words.push_back(word);
            }
            word = "";
        }else{
            word += sentence[i];
        }
    }
    if(isPrime(word.size())){
        prime_words.push_back(word);
    }
    for(auto w : prime_words) result += w + " ";
    return result;
}

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i=2; ;i++){
        if(i*i > n) break;
        if(n%i == 0) return false;
        n--;
    }
    return true;
}