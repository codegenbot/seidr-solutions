string find_max(vector<string> words){
    string result = "";
    int max_unique_chars = 0;
    
    for(string word : words){
        int unique_chars = 0;
        sort(word.begin(), word.end());
        for(int i=0; i<word.length(); i++){
            if(i==0 || word[i] != word[i-1]){
                unique_chars++;
            }
        }
        if(unique_chars > max_unique_chars){
            max_unique_chars = unique_chars;
            result = word;
        }
    }
    
    return result;
}