int words_in_sentence(const std::string& sentence) {
    int count = 0;
    bool inWord = false;

    for (const auto& c : sentence) { 
        if (c == ' ') {
            inWord = false;
        } else {
            if (!inWord) {
                count++;
                inWord = true;
            }
        }
    }

    return count;
}