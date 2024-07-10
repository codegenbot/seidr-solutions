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
    vector<string> numberals;
    string numberal;
    stringstream ss(numbers);
    
    while (ss >> numberal) {
        numberals.push_back(numberal);
    }
    
    sort(numberals.begin(), numberals.end(), [&](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });
    
    string sorted_numbers;
    for (const string &num : numberals) {
        sorted_numbers += num + " ";
    }
    
    return sorted_numbers;
}