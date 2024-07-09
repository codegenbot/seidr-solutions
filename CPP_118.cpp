string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = 0; i < n; ++i) {
        if (!isalpha(word[i])) continue;
        bool found = false;
        for (int j = i + 1; j < n && !found; ++j) {
            if (!isalpha(word[j])) continue;
            if ("aeiouAEIOU".find(toupper(word[j])) != string::npos) {
                found = true;
                break;
            }
        }
        if (found) return word.substr(i, j - i);
    }
    return "";
}