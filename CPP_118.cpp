Here is the solution:

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < word.size(); i++) {
        if (!isalpha(word[i])) continue;
        bool found_left = false, found_right = false;
        int left = i - 1;
        while (left >= 0 && !isalpha(word[left]) && !vowels.find(toupper(word[left])) != string::npos) {
            left--;
        }
        if (left < 0) continue;
        while (i < word.size() && !isalpha(word[i]) && !vowels.find(toupper(word[i])) != string::npos) {
            i++;
        }
        int right = i + 1;
        while (right < word.size() && !isalpha(word[right]) && !vowels.find(toupper(word[right])) != string::npos) {
            right++;
        }
        if (i > left && i < right) return string(1, toupper(word[i]));
    }
    return "";
}