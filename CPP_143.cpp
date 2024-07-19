std::string words_in_sentence(std::string sentence) {
    std::vector<std::string> words = split(sentence, ' ');
    std::string result;
    
    for (const auto& word : words) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    
    return result.substr(0, result.size() - 1);
}