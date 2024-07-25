string find_max(vector<string> words){
    string result;
    int maxUnique = 0;
    
    for (const auto &word : words) {
        set<char> uniqueChars(word.begin(), word.end());
        if (uniqueChars.size() > maxUnique) {
            maxUnique = uniqueChars.size();
            result = word;
        } else if (uniqueChars.size() == maxUnique) {
            if (result > word) {
                result = word;
            }
        }
    }
    
    return result;
}