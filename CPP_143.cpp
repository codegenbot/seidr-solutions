string words_in_sentence(string sentence){
    string result = "";
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    string word = "";
    for(char c : sentence){
        if(c == ' '){
            if(find(begin(primes), end(primes), word.length()) != end(primes)){
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    if(find(begin(primes), end(primes), word.length()) != end(primes)){
        result += word;
    }
    return result;
}