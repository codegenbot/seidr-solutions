string find_max(vector<string> words){
    string maxWord = *words.begin();
    for(const auto& word : words){
        if(count(word.begin(),word.end(),unique(word.begin(),word.end())) > count(unique(maxWord.begin(),maxWord.end()),maxWord.end())){
            maxWord = word;
        }else if(count(unique(word.begin(),word.end()),word.end()) == count(unique(maxWord.begin(),maxWord.end()),maxWord.end())){
            if(word < maxWord) maxWord = word;
        }
    }
    return maxWord;
}