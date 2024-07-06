map<char,int> histogram(string test){
    map<char,int> result;
    if(test.empty()) return result;

    string words[1000];
    int count = 0;
    for(string word : split(test, ' ')){
        if(result.find(word[0]) == result.end()){
            result[word[0]] = 1;
        } else {
            result[word[0]]++;
        }
        count++;
    }

    return result;
}

vector<string> split(string str, char delimiter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}