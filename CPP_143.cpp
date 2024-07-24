string words_in_sentence(string sentence) {
    string result = "";
    int count = 0;
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            if (is_prime(count)) {
                result += sentence.substr(0, i) + " ";
                count = 0;
            }
        } else {
            count++;
        }
    }
    if (is_prime(count)) {
        result += sentence.substr(0, sentence.length());
    }
    return result;
}

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}