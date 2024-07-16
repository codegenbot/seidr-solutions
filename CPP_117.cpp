vector<string> words;
    string word = "";
    int consonant_count = 0;
    for (char c : s) {
        if (c != ' ') {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                if (!word.empty()) {
                    if (consonant_count == n) {
                        words.push_back(word);
                    }
                    word = "";
                    consonant_count = 0;
                }
            } else {
                word += c;
                consonant_count++;
            }
        } else {
            if (!word.empty() && consonant_count == n) {
                words.push_back(word);
            }
            word = "";
            consonant_count = 0;
        }
    }
    if (!word.empty() && consonant_count == n) {
        words.push_back(word);
    }
    return words;