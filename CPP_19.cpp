string sort_numbers(const string& numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9};
    
    stringstream ss(numbers);
    vector<string> numVec;
    string token;
    
    while (ss >> token) {
        numVec.push_back(token);
    }
    
    sort(numVec.begin(), numVec.end(), [&](const string& a, const string& b) {
        return numMap[a] < numMap[b];
    });
    
    stringstream result;
    for (const string& num : numVec) {
        result << num << " ";
    }
    
    return result.str();
}