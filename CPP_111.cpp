map<pair<char,int>,int> histogram(string test){
    map<char,int> result;
    int maxCount = 0;
    for(auto& word : split(test, ' ')){
        int count = count(word.begin(), word.end(), *word.begin());
        if(count > maxCount){
            maxCount = count;
            result.clear();
            result[make_pair(*word.begin(),count)] = 1;
        }else if(count == maxCount){
            result[make_pair(*word.begin(),count)] = 1;
        }
    }
    return result;
}

vector<string> split(string str, char ch) {
    vector<string> tokens;
    string token;
    for (auto c : str) {
        if (c == ch) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    tokens.push_back(token);
    return tokens;
}