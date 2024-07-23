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
    map<int, string> rev_map;
    for (const auto& kv : number_map) {
        rev_map[kv.second] = kv.first;
    }

    stringstream ss(numbers);
    string token;
    vector<int> num_vec;
    while (ss >> token) {
        num_vec.push_back(number_map[token]);
    }

    sort(num_vec.begin(), num_vec.end());
    string result;
    for (const auto& num : num_vec) {
        result += rev_map[num] + " ";
    }
    result.pop_back(); // remove last space
    return result;
}