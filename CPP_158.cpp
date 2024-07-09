string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int unique_a = a.length() - strlen((char*)a.c_str());
            int unique_b = b.length() - strlen((char*)b.c_str());
            return (unique_a == unique_b) ? a < b : unique_a > unique_b;
        });
    return res;
}