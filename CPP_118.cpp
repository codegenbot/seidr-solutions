Here is the solution:

string get_closest_vowel(string word) {
    string vowels = "aeiouAEIOU";
    for (int i = word.size() - 1; i > 0; --i) {
        if (vowels.find(word[i]) != string::npos) {
            int j = i - 1;
            while (j >= 0 && vowels.find(word[j]) == string::npos) {
                --j;
            }
            return word.substr(j + 1, i - j - 1);
        }
    }
    return "";
}