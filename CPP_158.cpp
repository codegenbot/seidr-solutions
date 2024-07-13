string find_max(vector<string> words){
    string max = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int uniqueA = a.size() - __builtin_popcountll((~0ULL)^(unsigned long long)a);
            int uniqueB = b.size() - __builtin_popcountll((~0ULL)^ (unsigned long long)b);
            return make_pair(uniqueA, a) < make_pair(uniqueB, b);
        });
    return max;
}