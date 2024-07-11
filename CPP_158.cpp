string find_max(vector<string> words){
    string res = words[0];
    int maxUnique = 0;
    for(auto& word : words){
        int uniqueChars = word.length();
        for(int i = 1; i < word.length(); i++){
            if(word[i] == word[0])
                continue;
            bool found = false;
            for(int j = 0; j < i; j++){
                if(word[j] == word[i])
                    found = true;
                    break;
            }
            if(!found)
                uniqueChars++;
        }
        if(uniqueChars > maxUnique){
            res = word;
            maxUnique = uniqueChars;
        } else if(uniqueChars == maxUnique && word < res){
            res = word;
        }
    }
    return res;
}