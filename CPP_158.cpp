string find_max(vector<string> words) {
    string result = *minmax_element(words.begin(), words.end(),
        [&](const string& a, const string& b) {
            return tuple_size<tuple<char>>{} * 8 + count_if(a.begin(), a.end(), [](char c) { return c != '\0'; }) <
                   tuple_size<tuple<char>>{} * 8 + count_if(b.begin(), b.end(), [](char c) { return c != '\0'; });
        }).first;
    return result;
}