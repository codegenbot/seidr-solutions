map<char, int> histogram(string test){
    map<char, int> result;
    string letter;
    int maxCount = 0;
    
    for (char& c : test){
        if (c != ' '){
            result[c]++;
            if (result[c] > maxCount){
                maxCount = result[c];
            }
        }
    }
    
    map<char, int> finalResult;
    for (const auto &pair : result){
        if (pair.second == maxCount){
            finalResult.insert(pair);
        }
    }
    
    return finalResult;
}