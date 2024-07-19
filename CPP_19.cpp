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
    map<int, string> reverse_map;
    for (const auto& pair : number_map) {
        reverse_map[pair.second] = pair.first;
    }

    vector<int> nums;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        nums.push_back(number_map[token]);
    }

    sort(nums.begin(), nums.end());

    string result;
    for (int num : nums) {
        result += reverse_map[num] + " ";
    }

    result.pop_back(); // Remove the last space
    return result;
}