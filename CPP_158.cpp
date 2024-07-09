Here is the solution:

string find_max(vector<string> words){
    string res = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            return std::tie(a.size(), a) < std::tie(b.size(), b);
    });
    return res;
}