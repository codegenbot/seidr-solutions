string words_in_sentence(string sentence) {
    vector<int> primes = getPrimes(sentence.size());
    string result = "";
    
    for (int i = 0; i < sentence.size(); ++i) {
        if (primes[i] > 0) {
            size_t start = sentence.find(" ");
            size_t end = sentence.find(" ", start + 1);
            if (start != string::npos && end != string::npos) {
                result += &sentence[start] + 1;
                sentence.erase(start, end - start);
            } else {
                result += sentence.substr(start + 1);
                sentence.erase(0, sentence.size());
            }
        }
    }
    
    return result;
}

vector<int> getPrimes(int n) {
    vector<bool> isPrime(n+1, true);
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    
    return primes;
}