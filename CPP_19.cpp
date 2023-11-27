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

    vector<int> numberList;
    string number;
    stringstream ss(numbers);

    while (ss >> number) {
        numberList.push_back(numberMap[number]);
    }

    sort(numberList.begin(), numberList.end());

    string sortedNumbers;
    for (int num : numberList) {
        for (auto it = numberMap.begin(); it != numberMap.end(); ++it) {
            if (it->second == num) {
                sortedNumbers += it->first;
                sortedNumbers += " ";
                break;
            }
        }
    }

    sortedNumbers.pop_back(); // remove the extra space at the end
    return sortedNumbers;
}