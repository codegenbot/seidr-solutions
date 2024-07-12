string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int a_unique = a.length() - std::count(a.begin(), a.end, ' ') -
                std::count(a.begin(), a.end, '\0');
            int b_unique = b.length() - std::count(b.begin(), b.end, ' ') -
                std::count(b.begin(), b.end, '\0');
            if (a_unique > b_unique) return true;
            else if (a_unique < b_unique) return false;
            else return a < b;
        });
    return res;
}