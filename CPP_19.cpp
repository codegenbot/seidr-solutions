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

string sort_numbers(string numbers){
    map<int, string> rev_map;
    for (const auto& pair : num_map) {
        rev_map[pair.second] = pair.first;
    }

    string result = "";
    bool first = true;

    size_t start = 0;
    size_t end = numbers.find(" ");
    while (end != string::npos) {
        string num_str = numbers.substr(start, end - start);
        int num = num_map[num_str];
        if (!first)
            result += " ";
        result += rev_map[num];
        first = false;
        start = end + 1;
        end = numbers.find(" ", start);
    }

    string num_str = numbers.substr(start);
    int num = num_map[num_str];
    if (!first)
        result += " ";
    result += rev_map[num];

    return result;
}