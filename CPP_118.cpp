Here is the completed code:

string get_closest_vowel(string word) {
    int n = word.size();
    for (int i = 1; i < n - 1; ++i) {
        if (!isalpha(word[i])) continue;
        if (ispunct(word[i]) || isupper(word[i])) continue;
        string left, right;
        for (int j = i + 1; j < n && !ispunct(word[j]); ++j)
            right += word[j];
        for (int j = i - 1; j >= 0 && !ispunct(word[j]); --j)
            left += word[j];
        bool found = false;
        for (char c : "aeiouAEIOU") {
            if (left.find(c) != string::npos || right.find(c) != string::npos) {
                return c == 'Y' ? "Y" : string(1, c);
            }
        }
    }
    return "";
}