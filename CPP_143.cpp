string words_in_sentence(string sentence) {
    string result = "";
    int i = 0;
    while (i < sentence.size()) {
        int start = i + 1;
        while (start <= sentence.size() && !ispunct(sentence[start])) {
            start++;
        }
        if (start - i > 0) {
            int len = start - i;
            bool isPrime = true;
            for (int j = 2; j * j <= len; j++) {
                if (len % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                result += sentence.substr(i, start - i) + " ";
            }
        }
        i = start;
    }
    return result;
}