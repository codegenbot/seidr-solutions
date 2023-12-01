map<char, int> histogram(string test){
    map<char, int> result;

    // Count the occurrences of each letter
    for(int i = 0; i < test.size(); i++){
        if(test[i] != ' '){
            result[test[i]]++;
        }
    }

    // Find the maximum occurrence
    int maxCount = 0;
    for(auto it = result.begin(); it != result.end(); it++){
        if(it->second > maxCount){
            maxCount = it->second;
        }
    }

    // Add all letters with the maximum occurrence to the final result
    map<char, int> finalResult;
    for(auto it = result.begin(); it != result.end(); it++){
        if(it->second == maxCount){
            finalResult.insert(*it);
        }
    }

    return finalResult;
}