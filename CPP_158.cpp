string find_max(vector<string> words){
    string max = *min_element(words.begin(), words.end());
    for(string word : words){
        if(word.size() > max.size() || (word.size() == max.size() && word < max))
            max = word;
    }
    return max;
}