string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(), 
        [&] (const string& a, const string& b) {
            int unique_chars_a = a.length() - std::count(a.begin(), a.end(), '*');
            int unique_chars_b = b.length() - std::count(b.begin(), b.end(), '*');
            if(unique_chars_a == unique_chars_b)
                return a < b;
            else
                return unique_chars_a > unique_chars_b;
    });
    return max_word;
}