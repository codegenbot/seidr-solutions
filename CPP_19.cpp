string sort_numbers(string numbers){
    map<string, int> numeralToNumber = {
        {"zero", 0},
        {"one", 1},
        {"two", 2},
        {"three", 3},
        {"four", 4},
        {"five", 5},
        {"six", 6},
        {"seven", 7},
        {"eight", 8},
        {"nine", 9}
    };

    map<int, string> numberToNumeral;
    for (const auto& it : numeralToNumber) {
        numberToNumeral[it.second] = it.first;
    }

    vector<int> numOrder;
    stringstream ss(numbers);
    string num;
    while (ss >> num) {
        numOrder.push_back(numeralToNumber[num]);
    }

    sort(numOrder.begin(), numOrder.end());

    string sortedNumbers;
    for (const int& n : numOrder) {
        sortedNumbers += numberToNumeral[n] + " ";
    }

    return sortedNumbers.substr(0, sortedNumbers.size() - 1);
}