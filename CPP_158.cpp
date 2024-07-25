string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return (a.size() + count(a.begin(), a.end(), ' '), 
                    size_t(0)) < (b.size() + count(b.begin(), b.end(), ' '), 
                                  size_t(0));
        }
    );
    return result;
}