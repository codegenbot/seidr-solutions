string words_in_sentence(string sentence){
    string result = "";
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    for (int i = 0; i < sentence.size(); i++) {
        if (i > 0) {
            result += " ";
        }
        string word = "";
        while (i < sentence.size() && sentence[i] != ' ') {
            word += sentence[i];
            i++;
        }
        int len = word.length();
        bool isPrime = false;
        for (int j = 0; j < sizeof(primes) / sizeof(primes[0]); j++) {
            if (primes[j] == len) {
                isPrime = true;
                break;
            }
        }
        if (isPrime) {
            result += word + " ";
        }
    }
    return result;
}