string words_in_sentence(string sentence) {
    string result = "";
    int i = 0;
    while (i < sentence.size()) {
        int j = i + 1;
        for (; j <= sentence.size(); j++) {
            if (j == sentence.size() || !isalpha(sentence[j])) {
                break;
            }
        }
        string word = sentence.substr(i, j - i);
        bool isPrime = true;
        for (int k = 2; k * k <= word.length(); k++) {
            if (word.length() % k == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            result += word + " ";
        }
        i = j;
    }
    return result.substr(0, result.size() - 1);
}