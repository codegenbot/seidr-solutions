Here is the completed code:

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < word.size(); i++) {
        if (!isalpha(word[i])) continue;
        int left = i + 1;
        while (left < word.size() && !isalpha(word[left]))
            left++;
        bool found = false;
        for (int j = left; j >= 0; j--) {
            if (vowels.find(tolower(word[j])) != string::npos) {
                found = true;
                break;
            }
            if (!isalpha(word[j])) break;
        }
        if (found) return word.substr(left - 1, 1);
    }
    return "";
}