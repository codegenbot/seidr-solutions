string find_max(vector<string> words){
    string result = "";
    int maxUniqueChars = 0;

    for(string word : words){
        int uniqueChars = 0;
        bool charExists[26] = {false};

        for(char c : word){
            if(!charExists[c - 'a']){
                uniqueChars++;
                charExists[c - 'a'] = true;
            }
        }

        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < result)){
            maxUniqueChars = uniqueChars;
            result = word;
        }
    }

    return result;
}