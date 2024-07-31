string words_in_sentence(string sentence){
    stringstream ss(sentence);
    string word, result;
    while (ss >> word) {
        int len = word.length();
        bool is_prime = true;
        if (len <= 1) {
            is_prime = false;
        } else {
            for (int i = 2; i * i <= len; ++i) {
                if (len % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }
        if (is_prime) {
            result += word + " ";
        }
    }
    if (!result.empty()) {
        result.pop_back(); // Remove the trailing space
    }
    return result;
}