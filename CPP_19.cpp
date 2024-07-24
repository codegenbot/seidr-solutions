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
    map<int, string> reverse_map;
    for (auto const &pair : number_map) {
        reverse_map[pair.second] = pair.first;
    }

    vector<int> num_list;
    istringstream iss(numbers);
    string word;
    while (iss >> word) {
        num_list.push_back(number_map[word]);
    }

    sort(num_list.begin(), num_list.end());

    string result;
    for (int num : num_list) {
        result += reverse_map[num] + " ";
    }

    result.pop_back(); // Remove extra space at the end
    return result;
}