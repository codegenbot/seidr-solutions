map<char,int> histogram(string test){
    map<char, int> result;
    stringstream ss(test);
    string token;
    while(getline(ss, token, ' ')){
        result[token]++;
    }
    return result;
}