Here is the solution:

string find_max(vector<string> words){
    string result = *max_element(words.begin(), words.end(), 
        [](const string &a, const string &b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.size() > b.size();
        });
    return result;
}