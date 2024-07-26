string get_closest_vowel(const string& word) {
    const string vowels = "aeiouAEIOU";
    int n = word.size();
    for (int i = n - 2; i >= 0; --i) {
        if (vowels.find(word[i]) != string::npos && !isalpha(word[i - 1]) && !isalpha(word[i + 1])) {
            return string(1, word[i]);
        }
    }
    return ""; // Return empty string if no vowel found
}

int main() {
    assert(get_closest_vowel("Above") == "o");
    return 0;
}