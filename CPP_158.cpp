```c++
vector<string> words;
int max_unique = 0;
string result;

for (const auto& word : words) {
    int unique_chars = word.length();
    for (char c : word) {
        if (find(word.begin(), word.end(), c) == word.end()) {
            unique_chars++;
        }
    }
    if (unique_chars > max_unique) {
        max_unique = unique_chars;
        result = word;
    } else if (unique_chars == max_unique && word < result) {
        result = word;
    }
}

return result;