string sort_numbers(string numbers){
    // Create a map to store the numberals and their corresponding values
    map<string, int> numberals;
    numberals["zero"] = 0;
    numberals["one"] = 1;
    numberals["two"] = 2;
    numberals["three"] = 3;
    numberals["four"] = 4;
    numberals["five"] = 5;
    numberals["six"] = 6;
    numberals["seven"] = 7;
    numberals["eight"] = 8;
    numberals["nine"] = 9;

    // Convert the input string to a vector of numberals
    vector<string> nums;
    stringstream ss(numbers);
    string num;
    while (ss >> num) {
        nums.push_back(num);
    }

    // Sort the numberals based on their values
    sort(nums.begin(), nums.end(), [&](const string& a, const string& b) {
        return numberals[a] < numberals[b];
    });

    // Convert the sorted numberals back to a string
    string sortedNumbers;
    for (const string& num : nums) {
        sortedNumbers += num + " ";
    }

    // Remove the trailing space
    sortedNumbers.pop_back();

    return sortedNumbers;
}