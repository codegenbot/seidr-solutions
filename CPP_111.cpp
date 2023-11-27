map<char,int> histogram(string test){
    map<char, int> result;
    if(test.empty()){
        return result;
    }
    
    map<char,int> count_map;
    stringstream s(test);
    string word;
    
    while(s >> word){
        for(char ch : word){
            count_map[ch]++;
        }
    }
    
    int max_count = 0;
    for(auto iter : count_map){
        max_count = max(max_count, iter.second);
    }
    
    for(auto iter : count_map){
        if(iter.second == max_count){
            result[iter.first] = iter.second;
        }
    }
    
    return result;
}