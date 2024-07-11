string find_max(vector<string> words){
    string result = *min_element(words.begin(), words.end());
    for(string word : words){
        if(count(word.begin(), word.end, word[0]) == 1 && count(word.begin(), word.end(), '#') < count(result.begin(), result.end(), '#')){
            result = word;
        }
    }
    return result;
}