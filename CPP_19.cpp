string sort_numbers(string numbers){
    map<string, int> numMap;
    numMap["zero"] = 0;
    numMap["one"] = 1;
    numMap["two"] = 2;
    numMap["three"] = 3;
    numMap["four"] = 4;
    numMap["five"] = 5;
    numMap["six"] = 6;
    numMap["seven"] = 7;
    numMap["eight"] = 8;
    numMap["nine"] = 9;
    
    // Split the input string into individual numbers
    vector<string> numList;
    stringstream ss(numbers);
    string num;
    while (getline(ss, num, ' ')) {
        numList.push_back(num);
    }
    
    // Sort the numbers based on their corresponding values in the map
    sort(numList.begin(), numList.end(), [&](const string& a, const string& b) {
        return numMap[a] < numMap[b];
    });
    
    // Create the result string
    string result;
    for (const string& n : numList) {
        result += n + " ";
    }
    
    // Remove the trailing space
    result.pop_back();
    
    return result;
}