string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31}; // Pre-defined prime numbers

    for (char c : sentence) {
        if (c == ' ') {
            if (word.size() > 0) {
                int word_length = word.size();
                bool is_prime = false;
                for (int prime : primes) {
                    if (word_length == prime) {
                        is_prime = true;
                        break;
                    }
                }
                if (is_prime) {
                    result += word + " ";
                }
                word = "";
            }
        } else {
            word += c;
        }
    }

    if (word.size() > 0) {
        int word_length = word.size();
        bool is_prime = false;
        for (int prime : primes) {
            if (word_length == prime) {
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