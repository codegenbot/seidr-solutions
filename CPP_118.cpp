Here is the solution:

string get_closest_vowel(string word) {
    string result = "";
    for (int i = 0; i < word.length(); i++) {
        if (!isalpha(word[i])) continue;
        bool isVowel = false;
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' ||
            word[i] == 'o' || word[i] == 'u') {
            isVowel = true;
        }
        int j = i + 1;
        while (j < word.length()) {
            if (!isalpha(word[j])) break;
            if (word[j] == 'a' || word[j] == 'e' || word[j] == 'i' ||
                word[j] == 'o' || word[j] == 'u') {
                isVowel = true;
                result = (char)word[j];
                return result;
            }
            j++;
        }
    }
    return result;
}