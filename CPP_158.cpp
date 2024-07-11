string find_max(vector<string> words){
    string result = *minmax_element(words.begin(), words.end(),
        [](const auto& a, const auto& b) {
            return tuple_size<>{}, distance(a.begin(), unique(a.begin(), a.end())) <
                distance(b.begin(), unique(b.begin(), b.end()));
    })->first;
    return result;
}