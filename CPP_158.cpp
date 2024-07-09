```
string find_max(vector<string> words){
    string result = *words.begin();
    for (const auto& word : words) {
        if (word.length() > result.length()) {
            result = word;
        } else if (word.length() == result.length()) {
            if (word < result) {
                result = word;
            }
        }
    }
    return result;
}