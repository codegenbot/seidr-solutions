string sort_numbers(string numbers){
    // Create a map to store the numberals and their corresponding values
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

    // Split the input string into individual numberals
    vector<string> numberals;
    stringstream ss(numbers);
    string num;
    while (ss >> num) {
        numberals.push_back(num);
    }

    // Sort the numberals based on their corresponding values
    sort(numberals.begin(), numberals.end(), [&](const string& a, const string& b) {
        return numMap[a] < numMap[b];
    });

    // Combine the sorted numberals into a string
    string sortedNumbers;
    for (const string& numberal : numberals) {
        sortedNumbers += numberal + " ";
    }

    return sortedNumbers;
}