vector<int> primeNumbers(int n) {
    vector<bool> isPrime(n + 1, true);
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }
    vector<int> primes;
    for (int i = 2; i <= n; i++)
        if (isPrime[i])
            primes.push_back(i);
    return primes;
}

string words_in_sentence(string sentence) {
    int n = sentence.size();
    vector<string> words;
    string word;
    for (int i = 0; i < n; i++) {
        char c = sentence[i];
        if (c == ' ') {
            if (!word.empty())
                words.push_back(word);
            word = "";
        } else
            word += c;
    }
    if (!word.empty())
        words.push_back(word);

    vector<int> prime = primeNumbers(1000);
    string result;
    for (string w : words) {
        int len = w.size();
        bool isPrime = false;
        for (int p : prime) {
            if (p == len) {
                isPrime = true;
                break;
            }
        }
        if (isPrime)
            result += w + " ";
    }
    return result.substr(0, result.size() - 1);
}