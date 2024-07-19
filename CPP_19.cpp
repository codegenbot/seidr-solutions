map<string, int> num_map = {
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
    vector<int> sorted_nums;
    stringstream ss(numbers);
    string token;

    while (ss >> token) {
        sorted_nums.push_back(num_map[token]);
    }

    sort(sorted_nums.begin(), sorted_nums.end());

    for (int num : sorted_nums) {
        for (auto it : num_map) {
            if (it.second == num) {
                result += it.first + " ";
                break;
            }
        }
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}