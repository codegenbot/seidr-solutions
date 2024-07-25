string find_max(vector<string> words){
    string max = words[0];
    int maxUniqueChars = 0;

    for(auto &word : words){
        int uniqueChars = 0;
        for(auto c : word){
            bool found = false;
            for(int i = 0; i < uniqueChars; ++i){
                if(word[i] == c) {
                    found = true;
                    break;
                }
            }
            if(!found)
                uniqueChars++;
        }
        
        if(uniqueChars > maxUniqueChars || (uniqueChars == maxUniqueChars && word < max)){
            max = word;
            maxUniqueChars = uniqueChars;
        }
    }

    return max;
}