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

string sort_numbers(string numbers) {
    string result = "";
    vector<string> num_str;
    string current = "";
    for (char c : numbers) {
        if (c == ' ') {
            num_str.push_back(current);
            current = "";
        } else {
            current += c;
        }
    }
    num_str.push_back(current);

    vector<int> sorted_nums;
    for (string num : num_str) {
        sorted_nums.push_back(number_map[num]);
    }
    sort(sorted_nums.begin(), sorted_nums.end());

    for (int num : sorted_nums) {
        for (auto it : number_map) {
            if (it.second == num) {
                result += it.first + " ";
            }
        }
    }

    result.erase(result.size() - 1);
    return result;
}