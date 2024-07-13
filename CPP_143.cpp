size_t count_words(const std::string& sentence) {
    size_t word_count = 0;
    bool in_word = false;

    for (char c : sentence) {
        if (!in_word && std::isspace(std::tolower(c))) { 
            in_word = true;
            ++word_count;
        } else if (in_word && !std::isspace(std::tolower(c))) { 
            in_word = false;
        }
    }

    return word_count;
}

int main() {
    assert(count_words("here is") == 2);
    return 0;
}