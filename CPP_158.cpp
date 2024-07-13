string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int unique_count_a = a.length() - count(a.begin(), a.end(), ' ');
            int unique_count_b = b.length() - count(b.begin(), b.end(), ' ');
            if(unique_count_a > unique_count_b) return true;
            else if(unique_count_a < unique_count_b) return false;
            return a < b;
        });
    return max_word;
}