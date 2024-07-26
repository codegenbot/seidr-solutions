string words_in_sentence(string sentence){
    string result = "";
    int len = sentence.length();
    int i = 0;
    while (i < len) {
        string word = "";
        while (i < len && sentence[i] != ' ') {
            word += sentence[i];
            i++;
        }
        if (word.length() > 1) {
            bool is_prime = true;
            for (int j = 2; j * j <= word.length(); j++) {
                if (word.length() % j == 0) {
                    is_prime = false;
                    break;
                }
            }
            if (is_prime) {
                result += word + " ";
            }
        }
        i++;
    }
    if (!result.empty()) {
        result.pop_back(); // remove the last space
    }
    return result;
}