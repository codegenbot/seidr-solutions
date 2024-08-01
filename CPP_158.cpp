string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(), 
                                    [&words](const string& a, const string& b) {
                                        return (a.length() != b.length()) ? 
                                            a.length() < b.length() : a.compare(b);
                                    });
    return max_word;
}