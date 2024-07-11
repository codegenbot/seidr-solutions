map<char,int> histogram(string test){
    map<char, int> letterCount;
    for(char c : test){
        if(c != ' '){
            letterCount[c]++;
        }
    }

    int maxCount = 0;
    for(auto it : letterCount){
        maxCount = max(maxCount, it.second);
    }

    map<char, int> result;
    for(auto it : letterCount){
        if(it.second == maxCount){
            result[it.first] = it.second;
        }
    }

    return result;
}