```
int max_count = 0;
string result;

for (const auto& word : words) {
    int count = 0;
    set<char> unique_chars(word.begin(), word.end());
    if (unique_chars.size() > max_count) {
        max_count = unique_chars.size();
        result = word;
    }
}

return result;