string words_in_sentence(string sentence) {
    string result = "";
    int count = 0;

    for (int i = 0; i < sentence.size(); i++) {
        if (sentence[i] == ' ') {
            continue;
        }
        bool is_prime = true;
        int len = 1;
        for (int j = 2; j * j <= len; j++) {
            if (len % j == 0) {
                is_prime = false;
                break;
            }
            len++;
        }
        if (is_prime) {
            result += sentence.substr(count, i - count + 1);
            count = i + 1;
        }
    }
    result += sentence.substr(count);

    return result;
}