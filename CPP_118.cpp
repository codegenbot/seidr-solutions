Here is the completed code:

string get_closest_vowel(string word) {
    string result = "";
    for (int i = word.length() - 1; i >= 0; --i) {
        if (!isalpha(word[i])) continue;
        char c = tolower(word[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            int left = i + 1;
            while (left < word.length() && !isalpha(word[left])) ++left;
            int right = i - 1;
            while (right >= 0 && !isalpha(word[right])) --right;
            if (right >= 0 && isalpha(word[right]) && left < word.length()) {
                result = (word.substr(right + 1, 1) == "a" || word.substr(right + 1, 1) == "e" ||
                          word.substr(right + 1, 1) == "i" || word.substr(right + 1, 1) == "o" ||
                          word.substr(right + 1, 1) == "u") ? result : tolower(word.substr(right + 1, 1));
                return result;
            }
        }
    }
    return "";
}