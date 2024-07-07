string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end());
    for(string word : words){
        if(count(word.begin(),word.end(),unique(word.begin(),word.end())[0]) > count(result.begin(),result.end(),unique(result.begin(),result.end())[0])){
            result = word;
        }
        else if(count(word.begin(),word.end(),unique(word.begin(),word.end())[0]) == count(result.begin(),result.end(),unique(result.end(),result.begin())[0])){
            result = min(result, word);
        }
    }
    return result;
}