Here is the completed code:

string get_closest_vowel(string word) {
    int left = 0;
    for (int right = word.size() - 1; right >= 0; --right) {
        if (!isalpha(word[right])) continue;
        if (ispunct(word[right]) || !islower(word[right])) break;
        while (left < right && !isalpha(word[left])) ++left;
        if (ispunct(word[left])) break;
        if (ispunct(word[left-1])) --left;
        for (int i = left; i < right; ++i) {
            if (!isalpha(word[i])) continue;
            if (ispunct(word[i]) || !islower(word[i])) break;
            if (ispunct(word[i-1])) break;
            if (ispunct(word[i+1])) --right;
            for (char c = 'a'; c <= 'z'; ++c) {
                string test = word.substr(left, right - left + 1);
                size_t pos = test.find(c);
                if (pos != string::npos) return string(1, c);
            }
        }
    }
    return "";
}