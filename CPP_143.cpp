string result = "";
    string word = "";
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}; // List of prime numbers up to 37

    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            int word_len = word.length();
            bool is_prime = false;
            for (int prime : primes) {
                if (word_len == prime) {
                    is_prime = true;
                    break;
                }
            }
            if (is_prime) {
                result += word + " ";
            }
            word = "";
        }
    }

    // Check the last word
    int word_len = word.length();
    bool is_prime = false;
    for (int prime : primes) {
        if (word_len == prime) {
            is_prime = true;
            break;
        }
    }
    if (is_prime) {
        result += word;
    }

    return result;
}