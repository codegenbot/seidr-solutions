Here is the completed code:

string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end(), 
      [](const string& a, const string& b) {
        return count(a.begin(), a.end(), unique(a.begin(), a.end())[0]) <
               count(b.begin(), b.end(), unique(b.begin(), b.end())[0]);
      });
    return max_word;
}