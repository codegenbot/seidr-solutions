string find_max(vector<string> words){
    string result = "";
    int maxChars = 0;
    
    for(const string& word : words) {
        int uniqueChars = std::set<char>(word.begin(), word.end()).size();
        
        if(uniqueChars > maxChars || (uniqueChars == maxChars && word < result)) {
            maxChars = uniqueChars;
            result = word;
        }
    }
    
    return result;
}