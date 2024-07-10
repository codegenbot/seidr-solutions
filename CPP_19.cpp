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
    stringstream ss(numbers);
    string num;
    vector<string> number_list;
    
    while (ss >> num) {
        number_list.push_back(num);
    }

    sort(number_list.begin(), number_list.end(), [&](const string &a, const string &b) {
       return num_map[a] < num_map[b]; 
    });

    string result = "";
    for (const string &n : number_list) {
        result += n + " ";
    }

    return result;
}