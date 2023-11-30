string sort_numbers(string numbers){
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
    stringstream ss(numbers);
    string number;
    while (ss >> number) {
        numberList.push_back(number);
    }

    sort(numberList.begin(), numberList.end(), [&](const string& a, const string& b) {
        return numberMap[a] < numberMap[b];
    });

    string sortedNumbers;
    for (const string& num : numberList) {
        sortedNumbers += num + " ";
    }

    return sortedNumbers;
}