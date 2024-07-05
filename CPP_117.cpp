vector<string> select_words(string s, int n) {
    vector<string> result;
    string word;
    string consonants = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                int consonant_count = count_if(word.begin(), word.end(), [&](char ch) {
                    return consonants.find(ch) != string::npos;
                });
                if (consonant_count == n) {
                    result.push_back(word);
                }
                word.clear();
            }
        } else {
            word += c;
        }
    }
    
    if (!word.empty()) {
        int consonant_count = count_if(word.begin(), word.end(), [&](char ch) {
            return consonants.find(ch) != string::npos;
        });
        if (consonant_count == n) {
            result.push_back(word);
        }
    }
    
    return result;
}