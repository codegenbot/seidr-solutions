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
    vector<pair<int, string>> num_list;

    string num;
    stringstream ss(numbers);
    while (ss >> num) {
        num_list.push_back({number_map[num], num});
    }

    sort(num_list.begin(), num_list.end());

    for (auto& p : num_list) {
        result += p.second + " ";
    }

    return result.substr(0, result.size() - 1);
}