map<string, int> numeral_map = {
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
    string current_num;
    string result;

    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == ' ') {
            sorted_numbers[numeral_map[current_num]] = current_num;
            current_num = "";
        } else {
            current_num += numbers[i];
        }
    }

    sorted_numbers[numeral_map[current_num]] = current_num;

    for (const auto& num : sorted_numbers) {
        result += num.second + " ";
    }

    return result;
}