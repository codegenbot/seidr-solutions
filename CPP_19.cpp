map<string, int> numeral_map = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers) {
    string sorted_numbers;
    vector<string> numeral_list;
    stringstream ss(numbers);
    string num;

    while (ss >> num) {
        numeral_list.push_back(num);
    }

    sort(numeral_list.begin(), numeral_list.end(), [&](const string &a, const string &b) {
        return numeral_map[a] < numeral_map[b];
    });

    for (const string &numeral : numeral_list) {
        sorted_numbers += numeral + " ";
    }

    sorted_numbers.pop_back(); // Remove extra space at the end
    return sorted_numbers;
}