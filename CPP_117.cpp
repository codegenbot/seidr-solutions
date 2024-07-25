vector<string> words;
    string word = "";
    int consonantCount = 0;

    for (char c : s) {
        if (c != ' ') {
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
                c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
                consonantCount++;
            }
            word += c;
        } else {
            if (consonantCount == n) {
                words.push_back(word);
            }
            word = "";
            consonantCount = 0;
        }
    }

    if (consonantCount == n) {
        words.push_back(word);
    }

    return words;