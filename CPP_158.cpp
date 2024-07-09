string find_max(vector<string> words){
    string result = *minmax_element(words.begin(), words.end(),
        [](const auto& a, const auto& b) {
            auto count_a = a.size();
            auto count_b = b.size();
            return make_pair(count_b, a) < make_pair(count_a, b);
        }) -> second;
    return result;
}