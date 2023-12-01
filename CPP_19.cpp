string sort_numbers(string numbers) {
    // Create a map to store the numberals and their corresponding values
    map<string, int> numeralMap;
    numeralMap["zero"] = 0;
    numeralMap["one"] = 1;
    numeralMap["two"] = 2;
    numeralMap["three"] = 3;
    numeralMap["four"] = 4;
    numeralMap["five"] = 5;
    numeralMap["six"] = 6;
    numeralMap["seven"] = 7;
    numeralMap["eight"] = 8;
    numeralMap["nine"] = 9;

    // Split the input string into individual numberals
    vector<string> numberals;
    stringstream ss(numbers);
    string temp;
    while (getline(ss, temp, ' ')) {
        numberals.push_back(temp);
    }

    // Sort the numberals based on their corresponding values
    sort(numberals.begin(), numberals.end(), [&](const string& a, const string& b) {
        return numeralMap[a] < numeralMap[b];
    });

    // Create the sorted string
    string sortedNumbers;
    for (const string& numeral : numberals) {
        sortedNumbers += numeral + " ";
    }

    // Remove the trailing space
    sortedNumbers.pop_back();

    return sortedNumbers;
}