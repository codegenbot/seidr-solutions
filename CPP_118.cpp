string get_closest_vowel(string word) {
    int left = 0;
    for (int i = word.length() - 1; i >= 0; i--) {
        if (!isVowel(word[i])) {
            left = i + 1;
            break;
        }
    }

    string result;
    for (int i = left; i < word.length(); i++) {
        if (isVowel(word[i])) {
            result = word.substr(i, 1);
            return result;
        }
    }

    return "";
}

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}