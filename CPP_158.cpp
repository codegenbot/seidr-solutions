#include <set>
#include <algorithm>

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            int unique_a = unique_chars_count(a);
            int unique_b = unique_chars_count(b);
            if(unique_a == unique_b)
                return a < b;
            return unique_a > unique_b;
        });
    return max_word;
}

int unique_chars_count(const string& s) {
    set<char> unique_chars(s.begin(), s.end());
    return unique_chars.size();
}