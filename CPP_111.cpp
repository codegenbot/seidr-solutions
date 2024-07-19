map<char, int> histogram(string test){
    map<char, int> result;
    if(test.empty()) return result;

    map<char, int> count;
    for(char c : test){
        if(c != ' ') count[c]++;
    }

    int maxCount = 0;
    for(auto& pair : count){
        if(pair.second > maxCount){
            result.clear();
            maxCount = pair.second;
        }
        if(pair.second == maxCount){
            result[pair.first] = pair.second;
        }
    }

    return result;
}