string result = "";
    string word = "";
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}; // Prime numbers up to 37
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            if (word.length() > 0) {
                bool is_prime = false;
                for (int prime : primes) {
                    if (word.length() == prime) {
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
    }
    if (word.length() > 0) {
        bool is_prime = false;
        for (int prime : primes) {
            if (word.length() == prime) {
                is_prime = true;
                break;
            }
        }
        if (is_prime) {
            result += word;
        }
    }
    return result;
}