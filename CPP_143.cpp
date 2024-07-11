string words_in_sentence(string sentence) {
    string result = "";
    int len = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (isPrime(len)) {
                result += sentence.substr(len - strlen(&sentence[i]), i - len);
            }
            len = 0;
        } else {
            len++;
        }
    }
    if (isPrime(len)) {
        result += sentence.substr(len - strlen(&sentence[len]));
    }
    return result;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}