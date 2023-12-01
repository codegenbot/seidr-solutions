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

    // Split the input string into individual numbers
    vector<string> numberList;
    stringstream ss(numbers);
    string number;
    while (getline(ss, number, ' ')) {
        numberList.push_back(number);
    }

    // Sort the numbers using the numberMap
    sort(numberList.begin(), numberList.end(), [&](const string& a, const string& b) {
        return numberMap[a] < numberMap[b];
    });

    // Convert the sorted numbers back to a string
    string sortedNumbers;
    for (const string& num : numberList) {
        sortedNumbers += num + " ";
    }

    // Remove the trailing space
    sortedNumbers.pop_back();

    return sortedNumbers;
}