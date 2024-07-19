string words_in_sentence(string sentence){
    string result = "";
    string word = "";
    int primeLengths[] = {2, 3, 5, 7, 11, 13, 17, 19}; // Prime numbers up to 20

    for (char c : sentence) {
        if (c == ' ') {
            if (word.size() > 0) {
                if (find(begin(primeLengths), end(primeLengths), word.size()) != end(primeLengths)) {
                    result += word + " ";
                }
                word = "";
            }
        } else {
            word += c;
        }
    }

    if (word.size() > 0) {
        if (find(begin(primeLengths), end(primeLengths), word.size()) != end(primeLengths)) {
            result += word;
        }
    }

    return result;
}