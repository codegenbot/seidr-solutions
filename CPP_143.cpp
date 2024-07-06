int words_in_sentence(const std::string& sentence) {
    int count = 0;
    bool inWord = false;

    for (auto it = sentence.begin(); it != sentence.end(); ++it) { 
        if (*it == ' ') {
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