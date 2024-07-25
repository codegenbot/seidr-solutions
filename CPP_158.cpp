string find_max(vector<string> words){
    string res = *minmax_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return count(a.begin(), a.end(), a[0]) > count(b.begin(), b.end(), b[0]);
        })->first;
    return res;
}