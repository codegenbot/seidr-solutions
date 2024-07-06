std::string words_in_sentence(std::string sentence) {
    int start = 0;
    for (int i = 0; i <= sentence.size(); ++i) {
        if (i == sentence.size() || sentence[i] == ' ') {
            std::string word = sentence.substr(start, i - start);
            if (!word.empty())
                return word + " ";
            start = i + 1;
        }
    }
    return "";
}