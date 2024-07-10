std::string words_in_sentence(std::string sentence) {
    vector<std::string> words = split(sentence, ' ');
    std::string result;
    
    for (int i = 0; i < words.size(); i++) {
        if (is_prime(words[i].length())) {
            result += words[i] + " ";
        }
    }
    
    return result;
}