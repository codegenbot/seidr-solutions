string sort_numbers(string numbers) {
    map<string, int> numberMap;
    numberMap["zero"] = 0;
    numberMap["one"] = 1;
    numberMap["two"] = 2;
    numberMap["three"] = 3;
    numberMap["four"] = 4;
    numberMap["five"] = 5;
    numberMap["six"] = 6;
    numberMap["seven"] = 7;
    numberMap["eight"] = 8;
    numberMap["nine"] = 9;
    
    vector<string> numberList;
    string currentNumber = "";
    
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            numberList.push_back(currentNumber);
            currentNumber = "";
        } else {
            currentNumber += numbers[i];
        }
    }
    numberList.push_back(currentNumber);
    
    sort(numberList.begin(), numberList.end(), [&](const string& a, const string& b) {
        return numberMap[a] < numberMap[b];
    });
    
    string result = "";
    for (int i = 0; i < numberList.size(); i++) {
        result += numberList[i];
        if (i != numberList.size() - 1) {
            result += " ";
        }
    }
    
    return result;
}