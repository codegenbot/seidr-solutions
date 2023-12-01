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

    vector<int> sortedNumbers;

    // Split the input string into individual numbers
    stringstream ss(numbers);
    string num;
    while (getline(ss, num, ' ')) {
        sortedNumbers.push_back(numMap[num]);
    }

    // Sort the numbers in ascending order
    sort(sortedNumbers.begin(), sortedNumbers.end());

    // Convert the sorted numbers back to string
    string result;
    for (int i = 0; i < sortedNumbers.size(); i++) {
        for (auto it = numMap.begin(); it != numMap.end(); ++it) {
            if (it->second == sortedNumbers[i]) {
                result += it->first + " ";
                break;
            }
        }
    }

    // Remove the trailing space
    result = result.substr(0, result.length() - 1);

    return result;
}