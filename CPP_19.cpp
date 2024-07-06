string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> numVec;
    string temp;
    
    for(int i = 0; i < numbers.length(); i++) {
        if(numbers[i] == ' ') {
            continue;
        }
        temp += numbers[i];
        
        for(int j = i + 1; j <= numbers.length(); j++) {
            if(j == numbers.length() || numbers[j] != ' ') {
                break;
            }
            temp += numbers[j];
        }
        
        numVec.push_back(temp);
        temp.clear();
    }
    
    sort(numVec.begin(), numVec.end());
    string result = "";
    for(int i = 0; i < numVec.size(); i++) {
        result += numMap[numVec[i]] < numMap[numVec[0]] ? "zero" : numVec[i];
        if(i != numVec.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}