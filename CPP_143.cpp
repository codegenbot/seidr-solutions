string words_in_sentence(string sentence){
    string result;
    string word;
    for (char c : sentence) {
        if (c == ' ') {
            if (is_prime(word.size())) {
                result += (result.empty() ? "" : " ") + word;
            }
            word.clear();
        } else {
            word += c;
        }
    }
    if (is_prime(word.size())) {
        result += (result.empty() ? "" : " ") + word;
    }
    return result;
}