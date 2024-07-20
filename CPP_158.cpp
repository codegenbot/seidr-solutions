string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(), 
                                    [&] (const string &s1, const string &s2) {
                                        return count(s1.begin(), s1.end(), s1[0]) > count(s2.begin(), s2.end(), s2[0]);
                                    });
    return max_word;
}