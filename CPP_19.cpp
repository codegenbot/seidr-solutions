string sort_numbers(string numbers){
    map<string, int> dict = {
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

    string result = "";
    vector<string> num_list;
    stringstream ss(numbers);
    string token;
    while (ss >> token){
        num_list.push_back(token);
    }

    sort(num_list.begin(), num_list.end(), [&](string a, string b){
        return dict[a] < dict[b];
    });

    for (auto num : num_list){
        result += num + " ";
    }

    return result;
}