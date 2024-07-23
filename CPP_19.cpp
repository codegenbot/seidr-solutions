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

string sort_numbers(string numbers) {
    string result = "";
    map<int, string> rev_map;
  
    for (auto const& x : num_map) {
        rev_map[x.second] = x.first;
    }
    
    string word;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] == ' ') {
            result += rev_map[num_map[word]] + " ";
            word = "";
        } else {
            word += numbers[i];
        }
    }
    result += rev_map[num_map[word]];

    return result;
}