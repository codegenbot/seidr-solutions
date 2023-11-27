bool issame(map<char,int> a, map<char,int> b){
    return a == b;
}

map<char,int> histogram(string test){
    map<char, int> result;
    if(test.empty()){
        return result;
    }
    
    stringstream ss(test);
    string word;
    while(ss >> word){
        for(char c : word){
            result[c]++;
        }
    }
    
    int maxCount = 0;
    for(auto it = result.begin(); it != result.end(); it++){
        maxCount = max(maxCount, it->second);
    }
    
    map<char, int> maxLetters;
    for(auto it = result.begin(); it != result.end(); it++){
        if(it->second == maxCount){
            maxLetters[it->first] = it->second;
        }
    }
    
    return maxLetters;
}

int main() {
    assert(issame(histogram("a"), {{'a', 1}}));
    
    // Add more test cases here
    
    return 0;
}