string words_in_sentence(string sentence) {
    string result = "";
    int len = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (is_prime(len)) {
                result += sentence.substr(len - i, i) + " ";
            }
            len = 0;
        } else {
            len++;
        }
    }
    if (is_prime(len)) {
        result += sentence.substr(len - len, len) + " ";
    }
    return result.substr(0, result.length() - 1);
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}