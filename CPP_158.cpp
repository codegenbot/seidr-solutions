string find_max(vector<string> words){
    string maxWord = "";
    int maxUnique = 0;

    for(const string& word : words){
        int unique = 0;
        vector<bool> visited(26, false);

        for(char ch : word){
            if(!visited[ch - 'a']){
                visited[ch - 'a'] = true;
                unique++;
            }
        }

        if(unique > maxUnique || (unique == maxUnique && word < maxWord)){
            maxUnique = unique;
            maxWord = word;
        }
    }

    return maxWord;
}