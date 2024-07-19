string words_in_sentence(string sentence) {
    string result = "";
    int len = 0;

    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            continue;
        }
        len++;
        for (int j = 2; j * j <= len; j++) {
            if (len % j == 0) {
                break;
            }
        }
        if (j * j > len) {
            result += sentence.substr(i - len + 1, len) + " ";
            len = 0;
        }
    }

    return result;
}