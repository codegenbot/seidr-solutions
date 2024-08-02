string get_closest_vowel(string word) {
    for (int i = word.length() - 1; i > 0; --i) {
        if ("aeiouAEIOU".find(word[i]) != string::npos) {
            int j = i;
            while (j > 0 && "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ".find(word[j-1]) == string::npos) --j;
            if (i - j < j - i + 1) return word.substr(j, 1);
        }
    }
    return "";
}