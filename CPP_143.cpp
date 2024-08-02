string words_in_sentence(string sentence) {
    string result = "";
    int i = 0;
    while (i < sentence.size()) {
        int j = i + 1;
        while (j <= sentence.size() && !isspace(sentence[j])) {
            j++;
        }
        string word = sentence.substr(i, j - i);
        bool is_prime = true;
        for (int k = 2; k * k <= stol(word); k++) {
            if (stol(word) % k == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            result += word + " ";
        }
        i = j;
    }
    return result.substr(0, result.size() - 1);
}