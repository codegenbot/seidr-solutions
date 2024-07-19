string result = "";
    bool is_prime(int num) {
        if (num < 2) return false;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) return false;
        }
        return true;
    }

    string word;
    for (char c : sentence) {
        if (c == ' ') {
            if (word.length() > 0 && is_prime(word.length())) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }

    if (word.length() > 0 && is_prime(word.length())) {
        result += word;
    }

    return result;
}