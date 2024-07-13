Here is the solution:

string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end(), 
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (string s : words) {
        int count = 0;
        set<char> unique_chars(s.begin(), s.end());
        if ((int)unique_chars.size() > (int)s.find_first_of(unique_chars.c_str()) + 1) {
            result = s;
            break;
        }
    }
    return result;