```
int words_in_sentence(const std::string& sentence) {
    int count = 0;
    bool inWord = false;

    for (char c : sentence) { 
        if (c == ' ') {
            if (inWord) {
                inWord = false;
                count++;
            }
        } else {
            inWord = true;
        }
    }

    if (inWord) {
        count++; // Add one more word at the end
    }

    return count;
}