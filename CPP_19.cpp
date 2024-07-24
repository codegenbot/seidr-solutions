string sort_numbers(string numbers){
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

    vector<string> num_list;
    string num;

    istringstream iss(numbers);
    while(iss >> num) {
        num_list.push_back(num);
    }

    sort(num_list.begin(), num_list.end(), [&](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });

    string result = "";
    for(const string &n : num_list) {
        result += n + " ";
    }

    return result;
}