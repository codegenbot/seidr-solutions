string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return count(a.begin(), a.end(), a[0]) > count(b.begin(), b.end(), b[0]);
        });
    for (const auto& word : words) {
        if (count(word.begin(), word.end(), word[0]) == count(result.begin(), result.end(), result[0])) {
            return min(word, result);
        }
    }
    return result;
}