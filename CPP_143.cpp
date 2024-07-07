string words_in_sentence(string sentence){
    vector<int> primes = getPrimes(sentence);
    string result = "";
    int i = 0;
    for (int j = 0; j < sentence.size(); j++) {
        if (j + 1 <= primes[i]) {
            while (i + 1 < primes.size() && j + 1 > primes[i]) {
                i++;
            }
            result += " ";
        }
        result += sentence[j];
    }
    return result;
}

vector<int> getPrimes(string sentence){
    vector<bool> isPrime(101, true);
    for (int i = 2; i * i <= 100; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= 100; j += i) {
                isPrime[j] = false;
            }
        }
    }
    vector<int> primes;
    for (int i = 2; i <= 100; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}