string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [&](const string &a, const string &b) {
            return tie(a.size(), a) < tie(b.size(), b);
        });
    for (int i = 0; i < result.length(); ++i)
        if (result.find(result[i]) != result.find_first_of(result[i]))
            return words[distance(words.begin(), find_if(words.begin(), words.end(),
                [&](const string &s) { return s.size() == result.size() && tie(s, 1) > tie(result, 0); })) - words.begin()];
    return result;
}