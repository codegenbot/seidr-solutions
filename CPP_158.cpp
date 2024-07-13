string find_max(vector<string> words){
    string result = "";
    int maxUniqueChars = 0;

    for(auto& word : words){
        unordered_map<char, bool> uniqueChars;
        int currentUniqueChars = 0;

        for(char c : word){
            if(uniqueChars.find(c) == uniqueChars.end()){
                uniqueChars[c] = true;
                currentUniqueChars++;
            }
        }

        if(currentUniqueChars > maxUniqueChars || (currentUniqueChars == maxUniqueChars && word < result)){
            maxUniqueChars = currentUniqueChars;
            result = word;
        }
    }

    return result;
}