#include<unordered_set>

string find_max(vector<string> words) {
    auto unique_char_count = [](const string& word) {
        unordered_set<char> unique_chars(word.begin(), word.end());
        return unique_chars.size();
    };

    string result = "";
    int max_unique = 0;

    for (const auto& word : words) {
        int current_unique = unique_char_count(word);
        if (current_unique > max_unique || (current_unique == max_unique && word < result)) {
            max_unique = current_unique;
            result = word;
        }
    }

    return result;
}