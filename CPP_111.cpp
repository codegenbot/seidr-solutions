map<char,int> histogram(string test){
    map<char, int> result;
    if(test.empty()) return result;
    
    istringstream iss(test);
    string word;
    while(iss >> word){
        for(char& c : word){
            result[c]++;
        }
    }
    
    int max_count = 0;
    for(auto& entry : result){
        max_count = max(max_count, entry.second);
    }
    
    map<char, int> most_repeated;
    for(auto& entry : result){
        if(entry.second == max_count){
            most_repeated[entry.first] = entry.second;
        }
    }
    
    return most_repeated;
}