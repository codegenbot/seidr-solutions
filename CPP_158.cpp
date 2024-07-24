string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(), 
        [&] (const string& a, const string& b) {
            return count(a.begin(), a.end(), [](char c){return std::find(c, c+1, ' ') - c;}) <
                   count(b.begin(), b.end(), [](char c){return std::find(c, c+1, ' ') - c;});
        });
    return max_word;
}