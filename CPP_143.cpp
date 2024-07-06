std::string words_in_sentence(std::string sentence) {
    size_t start = 0;
    size_t end = 0;

    while ((end = sentence.find(" ")) != std::string::npos) {
        start = end + 1;
        end = sentence.find(" ", start);
    }

    return sentence.substr(0, end).trim();
}