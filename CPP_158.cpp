string find_max(vector<string> words){
    string maxWord = "";
    int maxUniqueChars = 0;

    for(string word : words){
        int uniqueChars = 0;
        bool visited[26] = {false};

        for(char c : word){
            if(!visited[c - 'a']){
                uniqueChars++;
                visited[c - 'a'] = true;
            }
        }

        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < maxWord)){
            maxUniqueChars = uniqueChars;
            maxWord = word;
        }
    }

    return maxWord;
}