string sort_numbers(string numbers){
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

    vector<string> number_strings;
    string number;
    stringstream ss(numbers);
    while(ss >> number){
        number_strings.push_back(number);
    }

    sort(number_strings.begin(), number_strings.end(), [&](const string &a, const string &b){
        return number_map[a] < number_map[b];
    });

    string sorted_numbers;
    for(const auto &num : number_strings){
        sorted_numbers += num + " ";
    }

    return sorted_numbers;
}