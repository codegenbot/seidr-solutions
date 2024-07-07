Here is the completed code:

```cpp
vector<string> words;

size_t max_unique_chars = 0;
string result;

for (const auto& word : words) {
    size_t unique_chars = word.size();
    for (char c : word) {
        if (word.find(c) != string::npos && std::count(word.begin(), word.end(), c) > 1) {
            unique_chars--;
        }
    }
    if (unique_chars > max_unique_chars) {
        max_unique_chars = unique_chars;
        result = word;
    } else if (unique_chars == max_unique_chars) {
        if (word < result) {
            result = word;
        }
    }
}

return result;