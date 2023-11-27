map<char,int> histogram(string test){
    map<char,int> result;
    for(char c : test){
        if(c != ' '){
            result[c]++;
        }
    }
    int maxCount = 0;
    for(auto it = result.begin(); it != result.end(); it++){
        maxCount = max(maxCount, it->second);
    }
    map<char,int> answer;
    for(auto it = result.begin(); it != result.end(); it++){
        if(it->second == maxCount){
            answer[it->first] = it->second;
        }
    }
    return answer;
}