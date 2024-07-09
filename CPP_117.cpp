vector<string> words;
        vector<string> result;

        int numConsonants = 0;
        string currentWord = "";

        for (char c : s) {
            if (c == ' ') {
                if (numConsonants == n) {
                    result.push_back(currentWord);
                }
                currentWord = "";
                numConsonants = 0;
            } else if (isalpha(c)) {
                currentWord += c;
                if (tolower(c) != 'a' && tolower(c) != 'e' && tolower(c) != 'i' && tolower(c) != 'o' && tolower(c) != 'u') {
                    numConsonants++;
                }
            }
        }

        if (numConsonants == n) {
            result.push_back(currentWord);
        }

        return result;