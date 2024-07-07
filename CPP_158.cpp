string find_max(vector<string> words){
    string result = "";
    for(auto& word : words){
        int unique_chars = 0;
        unordered_map<char, bool> seen;
        for(char c : word){
            if(seen[c]) continue;
            seen[c] = true;
            unique_chars++;
        }
        if(unique_chars > result.length() || (unique_chars == result.length() && word < result)){
            result = word;
        }
    }
    return result;
}