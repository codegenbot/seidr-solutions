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
    map<int, string> reverse_map;

    size_t pos = 0;
    while ((pos = numbers.find(' ')) != string::npos) {
        string word = numbers.substr(0, pos);
        numbers.erase(0, pos + 1);

        reverse_map[number_map[word]] = word;
    }
    reverse_map[number_map[numbers]] = numbers;

    for (const auto& num : reverse_map) {
        result += num.second + " ";
    }
    result.pop_back(); // Remove the extra space at the end

    return result;
}