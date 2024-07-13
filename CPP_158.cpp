vector<string> words;
int max_unique_chars = 0;
string result;

for (const auto& word : words) {
    int unique_chars = word.length();
    for (char c : word) {
        if (word.find(c) != word.rfind(c)) {
            unique_chars--;
        }
    }
    if (unique_chars > max_unique_chars || (unique_chars == max_unique_chars && result < word)) {
        max_unique_chars = unique_chars;
        result = word;
    }
}

return result;