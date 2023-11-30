string find_max(vector<string> words){
    string maxWord;
    int maxCount = 0;
    for(int i=0; i<words.size(); i++){
        string word = words[i];
        sort(word.begin(), word.end());
        word.erase(unique(word.begin(), word.end()), word.end());
        int uniqueCount = word.size();
        if(uniqueCount > maxCount || (uniqueCount == maxCount && word < maxWord)){
            maxCount = uniqueCount;
            maxWord = words[i];
        }
    }
    return maxWord;
}