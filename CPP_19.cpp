map<string, int> number_map = {
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

string sort_numbers(string numbers){
    stringstream ss(numbers);
    string number;
    vector<string> nums;
    while (ss >> number) {
        nums.push_back(number);
    }

    sort(nums.begin(), nums.end(), [&](const string &a, const string &b) {
        return number_map[a] < number_map[b];
    });

    string sorted_numbers;
    for (const auto &num : nums) {
        sorted_numbers += num + " ";
    }

    sorted_numbers.pop_back(); // Remove extra space at the end
    return sorted_numbers;
}