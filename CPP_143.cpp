string words_in_sentence(string sentence) {
    string result;
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29}; // List of prime numbers up to 30

    string word;
    for (char c : sentence) {
        if (c == ' ') {
            if (is_prime(word.size(), primes)) {
                result += word + " ";
            }
            word = "";
        } else {
            word += c;
        }
    }
    
    if (is_prime(word.size(), primes)) {
        result += word;
    }
    
    return result;
}

bool is_prime(int n, int primes[]) {
    for (int i : primes) {
        if (n == i) {
            return true;
        }
    }
    return false;
}