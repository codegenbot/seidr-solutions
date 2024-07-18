map<char, int> histogram(string test){
    map<char, int> charCount;

    string word;
    istringstream iss(test);
    while(iss >> word){
        for(char c : word){
            charCount[c]++;
        }
    }

    int maxCount = 0;
    for(auto it = charCount.begin(); it != charCount.end(); ++it){
        if(it->second > maxCount){
            maxCount = it->second;
        }
    }

    map<char, int> result;
    for(auto it = charCount.begin(); it != charCount.end(); ++it){
        if(it->second == maxCount){
            result[it->first] = it->second;
        }
    }

    return result;
}