map<string, int> number_map = {
    {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
    {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
    {"eight", 8}, {"nine", 9}
};

string sort_numbers(string numbers){
    string result = "";
    map<int, string> reverse_map;
    for (string::size_type i = 0; i < numbers.size(); i += 5){
        reverse_map[number_map[numbers.substr(i, 5)]] = numbers.substr(i, 5);
    }

    for (const auto &pair : reverse_map){
        result += pair.second + " ";
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}