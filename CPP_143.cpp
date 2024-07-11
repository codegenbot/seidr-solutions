string words_in_sentence(string sentence){
    string result = "";
    int n = sentence.length();
    int primes[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};

    int wordStart = 0;
    for (int i = 0; i <= n; ++i) {
        if (i == n || sentence[i] == ' ') {
            int wordLength = i - wordStart;
            bool isPrime = false;
            for (int j = 0; j < 26; ++j) {
                if (primes[j] == wordLength) {
                    isPrime = true;
                    break;
                }
            }
            if (isPrime) {
                result += sentence.substr(wordStart, wordLength) + " ";
            }
            wordStart = i + 1;
        }
    }
    return result;
}