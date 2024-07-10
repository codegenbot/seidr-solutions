vector<string> sorted_words;

for (auto word : words) {
    int unique_chars = 0;
    bool found[256] = {false};

    for (char c : word) {
        if (!found[c]) {
            found[c] = true;
            unique_chars++;
        }
    }

    if (unique_chars > 0) {
        sorted_words.push_back(word);
    }
}

sort(sorted_words.begin(), sorted_words.end());

auto max_unique_word = *max_element(sorted_words.begin(), sorted_words.end(),
                                         [](const string& a, const string& b) {
                                             return std::tie(a, count(a.begin(), a.end(), unique_chars)) <
                                                    std::tie(b, count(b.begin(), b.end(), unique_chars));
                                         });

return max_unique_word;