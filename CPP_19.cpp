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
    map<int, string> sorted_numbers;
    string result = "";
    
    string num;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == ' ') {
            sorted_numbers[number_map[num]] = num;
            num = "";
        } else {
            num += numbers[i];
        }
    }
    sorted_numbers[number_map[num]] = num;
    
    for (auto& num_pair : sorted_numbers) {
        result += num_pair.second + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}