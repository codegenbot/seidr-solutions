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
    
    string current_num = "";
    for (char c : numbers) {
        if (c == ' ') {
            num_values.push_back(num_map[current_num]);
            current_num = "";
        } else {
            current_num += c;
        }
    }
    num_values.push_back(num_map[current_num]);
    
    sort(num_values.begin(), num_values.end());
    
    string sorted_numbers = "";
    for (int num : num_values) {
        sorted_numbers += num_strings[num] + " ";
    }
    
    sorted_numbers.pop_back(); // Remove the extra space at the end
    
    return sorted_numbers;
}