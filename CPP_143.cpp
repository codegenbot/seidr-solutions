string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            int word_len = word.length();
            bool is_prime = true;
            if (word_len <= 1) {
                is_prime = false;
            } else {
                for (int i = 2; i * i <= word_len; ++i) {
                    if (word_len % i == 0) {
                        is_prime = false;
                        break;
                    }
                }
            }
            if (is_prime) {
                result += word + " ";
            }
            word = "";
        }
    }
    int word_len = word.length();
    bool is_prime = true;
    if (word_len <= 1) {
        is_prime = false;
    } else {
        for (int i = 2; i * i <= word_len; ++i) {
            if (word_len % i == 0) {
                is_prime = false;
                break;
            }
        }
    }
    if (is_prime) {
        result += word;
    }
    return result;
}