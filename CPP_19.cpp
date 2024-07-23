map<string, int> number_to_int{
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
    vector<string> number_strings;
    stringstream ss(numbers);
    string num_str, result;

    while (ss >> num_str){
        number_strings.push_back(num_str);
    }

    sort(number_strings.begin(), number_strings.end(), [&](const string &a, const string &b) {
        return number_to_int[a] < number_to_int[b];
    });

    for (const auto &num_str : number_strings){
        result += num_str + " ";
    }

    result.pop_back(); // Remove the extra whitespace at the end

    return result;
}