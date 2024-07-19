string words_in_sentence(string sentence){
    string result = "";
    int n = sentence.length();
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31}; // Prime numbers up to 31

    int start = 0;
    for (int i = 0; i <= n; i++) {
        if (i == n || sentence[i] == ' ') {
            int word_length = i - start;
            bool is_prime = false;
            for (int prime : primes) {
                if (word_length == prime) {
                    is_prime = true;
                    break;
                }
            }
            if (is_prime) {
                result += sentence.substr(start, word_length) + " ";
            }
            start = i + 1;
        }
    }

    if (!result.empty()) {
        result.pop_back(); // Remove the extra space at the end
    }

    return result;
}