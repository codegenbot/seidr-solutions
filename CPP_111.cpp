map<char, int> histogram(string test) {
    map<char, int> result;
    if (test.empty()) return result;

    string words[256]; // assuming only lowercase letters and spaces are present in the input
    int wordCount = 0;
    for (char c : test) {
        if (c == ' ') {
            wordCount++;
        } else {
            if (wordCount >= sizeof(words) / sizeof(string)) {
                return result; // handle error condition: too many words
            }
            words[wordCount] += c;
        }
    }

    for (int i = 0; i <= wordCount; i++) {
        int count = 1;
        for (int j = i + 1; j <= wordCount; j++) {
            if (words[i] == words[j]) {
                count++;
            } else {
                break;
            }
        }
        result[words[i]] = count;
    }

    return result;
}