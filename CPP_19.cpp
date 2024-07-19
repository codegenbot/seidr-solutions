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
    map<int, string> sorted_numbers;

    size_t pos = 0;
    while ((pos = numbers.find(" ")) != string::npos) {
        string num_str = numbers.substr(0, pos);
        sorted_numbers[number_map[num_str]] = num_str;
        numbers.erase(0, pos + 1);
    }
    sorted_numbers[number_map[numbers]] = numbers;

    for (const auto& pair : sorted_numbers) {
        result += pair.second + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}