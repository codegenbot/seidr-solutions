string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            int len = word.length();
            bool is_prime = true;
            for (int i = 2; i * i <= len; ++i) {
                if (len % i == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime && len > 1) {
                result += word + " ";
            }
            word = "";
        }
    }
    int len = word.length();
    bool is_prime = true;
    for (int i = 2; i * i <= len; ++i) {
        if (len % i == 0) {
            is_prime = false;
            break;
        }
    }
    if (is_prime && len > 1) {
        result += word;
    }
    return result;
}