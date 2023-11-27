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

    vector<int> sortedNumbers;
    string result = "";

    // Split the input string into individual numbers
    stringstream ss(numbers);
    string number;
    while (getline(ss, number, ' ')) {
        sortedNumbers.push_back(numberMap[number]);
    }

    // Sort the numbers
    sort(sortedNumbers.begin(), sortedNumbers.end());

    // Convert the sorted numbers back to string representation
    for (int i = 0; i < sortedNumbers.size(); i++) {
        for (auto it = numberMap.begin(); it != numberMap.end(); it++) {
            if (it->second == sortedNumbers[i]) {
                result += it->first + " ";
                break;
            }
        }
    }

    // Remove the trailing space
    if (!result.empty()) {
        result.pop_back();
    }

    return result;
}