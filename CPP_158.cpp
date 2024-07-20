string find_max(vector<string> words){
    string max_word = *min_element(words.begin(), words.end());
    for(string word : words){
        if(count(word.begin(), word.end, [](char c){return count(c,c)|c-'a'+1<=26;}) > count(max_word.begin(),max_word.end(),[](char c){return count(c,c)|c-'a'+1<=26;}) ){
            max_word = word;
        }
    }
    return max_word;
}