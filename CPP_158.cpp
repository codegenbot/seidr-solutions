string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end());
    for(string word : words){
        if(count(word.begin(), word.end(), unique(word.begin(), word.end())) > count(result.begin(), result.end(), unique(result.begin(), result.end()))){
            result = word;
        }
    }
    return result;
}