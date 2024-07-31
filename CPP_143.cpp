string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    bool is_prime_length[101] = {false, false, true, true, false, true, false, true, false, false, false, true, false, true, false, false, false, true, false, true, false, false, false, true, false, false, false, false, false, true, false, true, false, false, false, false, false, true, false, false, false, true, false, true, false, false, false, false, false, true, false, false, false, false, false, true, false, false, false, true, false, false, false, false, false, true, false, true, false, false, false, false, false, true, false, false, false, true, false, true, false, false, false, false, false, true, false, false, false, false, false, true, false, false, false, true, false, false, false, false, false, true, false, true, false, false, false, false, false, true, false, false, false};

    for (char c : sentence) {
        if (c != ' ') {
            word += c;
        } else {
            if (is_prime_length[word.size()]) {
                if (!result.empty()) {
                    result += " ";
                }
                result += word;
            }
            word = "";
        }
    }

    if (is_prime_length[word.size()]) {
        if (!result.empty()) {
            result += " ";
        }
        result += word;
    }

    return result;
}