string find_max(vector<string> words){
    string max_word;
    int max_unique = 0;
    for(auto word : words){
        int unique_count = 0;
        set<char> seen;
        for(char c : word){
            if(seen.insert(c).second) unique_count++;
        }
        if(unique_count > max_unique || (unique_count == max_unique && word < max_word)){
            max_word = word;
            max_unique = unique_count;
        }
    }
    return max_word;
}