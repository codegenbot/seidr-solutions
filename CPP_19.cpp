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

    vector<string> num_strings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    vector<int> num_values;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        num_values.push_back(num_map[token]);
    }

    sort(num_values.begin(), num_values.end());

    string result;
    for (int num : num_values) {
        result += num_strings[num] + " ";
    }

    result.pop_back(); // Remove extra space at the end

    return result;
}