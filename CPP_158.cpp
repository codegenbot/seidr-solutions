string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return count(a.begin(), a.end(), tolower(a[0])) <
                   count(b.begin(), b.end(), tolower(b[0]));
        });
    for (const auto& word : words) {
        if (count(word.begin(), word.end(), tolower(result[0])) <
            count(word.begin(), word.end(), tolower(word[0]))) {
            result = word;
        }
    }
    return result;
}