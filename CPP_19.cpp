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
    string result = "";
    vector<int> sorted_numbers;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        sorted_numbers.push_back(number_map[token]);
    }
    sort(sorted_numbers.begin(), sorted_numbers.end());
    for (int num : sorted_numbers) {
        for (auto it = number_map.begin(); it != number_map.end(); ++it) {
            if (it->second == num) {
                result += it->first + " ";
                break;
            }
        }
    }
    result.pop_back();  // Remove the extra space at the end
    return result;
}