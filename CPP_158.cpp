Here is the solution:

vector<string> max_word;

for (const auto& word : words) {
    set<char> unique_chars(word.begin(), word.end());
    if (unique_chars.size() > max_word.size()) {
        max_word = {word};
    } else if (unique_chars.size() == max_word.size()) {
        if (max_word[0] < word) {
            max_word.clear();
            max_word.push_back(word);
        }
    }
}

return max_word[0];