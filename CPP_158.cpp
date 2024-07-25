Here is the solution:

string find_max(vector<string> words){
    string max_word = *max_element(words.begin(), words.end(),
        [](const string& a, const string& b) {
            if (a.length() == b.length()) {
                return a < b;
            }
            return a.length() > b.length();
        });
    for (int i = 0; i < max_word.size(); i++) {
        bool found = false;
        for (const auto& word : words) {
            if (word.find(max_word[i]) != string::npos) {
                found = true;
                break;
            }
        }
        if (!found) {
            return "";
        }
    }
    return max_word;