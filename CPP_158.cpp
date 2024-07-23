string find_max(vector<string> words){
    string result = "";
    int max_unique_chars = 0;
    
    for(auto word : words){
        string sorted_word = word;
        sort(sorted_word.begin(), sorted_word.end());
        sorted_word.erase(unique(sorted_word.begin(), sorted_word.end()), sorted_word.end());
        
        if(sorted_word.size() > max_unique_chars || (sorted_word.size() == max_unique_chars && word < result)){
            max_unique_chars = sorted_word.size();
            result = word;
        }
    }
    
    return result;
}