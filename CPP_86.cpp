```cpp
string anti_shuffle(string s) {
    vector<string> words;
    string word = "";
    for (const auto& c : s) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    words.push_back(word);

    string result = "";
    for (const auto& word : words) {
        string w = word;
        sort(w.begin(), w.end());
        if (!result.empty()) {
            result += " ";
        }
        result += w;
    }
    return result;