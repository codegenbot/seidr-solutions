string find_max(vector<string> words){
    string result = *minmax_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int unique_a = a.length() - std::count(a.begin(), a.end, ' ') -
                std::count(a.begin(), a.end(), '\n') -
                std::count(a.begin(), a.end(), '\t');
            int unique_b = b.length() - std::count(b.begin(), b.end, ' ') -
                std::count(b.begin(), b.end(), '\n') -
                std::count(b.begin(), b.end(), '\t');
            return make_pair(unique_a, a) > make_pair(unique_b, b);
        }).first;
    return result;
}