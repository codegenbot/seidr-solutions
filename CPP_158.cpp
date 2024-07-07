Here is the solution:

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(), 
        [](const string& a, const string& b) {
            return (a.size() + count(a.begin(), a.end(), ' '), 
                    count(b.begin(), b.end(), ' ')) > 
                   (b.size() + count(b.begin(), b.end(), ' '), 
                    count(a.begin(), a.end(), ' '));
        });
    return max_word;
}