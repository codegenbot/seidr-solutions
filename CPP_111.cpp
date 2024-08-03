    bool issame(map<char,int> a, map<char,int> b);

    map<char,int> histogram(string test){
        map<char,int> result;
        string word;
        for(auto c : test){
            if(c == ' '){
                if(!word.empty()){
                    for(auto letter : word){
                        result[letter]++;
                    }
                    word.clear();
                }
            } else {
                word.push_back(c);
            }
        }
        if(!word.empty()){
            for(auto letter : word){
                result[letter]++;
            }
        }
        int maxCount = 0;
        for(auto& pair : result){
            maxCount = max(maxCount, pair.second);
        }
        map<char,int> maxLetters;
        for(auto& pair : result){
            if(pair.second == maxCount){
                maxLetters[pair.first] = pair.second;
            }
        }
        return maxLetters;
    }

    bool issame(map<char,int> a, map<char,int> b){
        return a == b;
    }