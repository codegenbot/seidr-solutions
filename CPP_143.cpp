string words_in_sentence(string sentence){
    string result = "";
    int len = sentence.length();
    int primes[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};

    int start = 0;
    for (int i = 0; i < len; i++) {
        if (sentence[i] == ' ' || i == len - 1) {
            int word_len = (i == len - 1) ? i - start + 1 : i - start;
            bool is_prime = false;
            for (int j = 0; j < 26; j++) {
                if (primes[j] == word_len) {
                    is_prime = true;
                    break;
                }
            }
            if (is_prime) {
                result += sentence.substr(start, word_len) + " ";
            }
            start = i + 1;
        }
    }

    if (!result.empty()) {
        result.pop_back(); // Remove the extra space at the end
    }

    return result;
}