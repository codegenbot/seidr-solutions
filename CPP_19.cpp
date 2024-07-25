string sort_numbers(string numbers){
    map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, 
                                {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    string result = "";
    vector<pair<int, string>> num_list;

    stringstream ss(numbers);
    string num_str;
    while (ss >> num_str) {
        num_list.push_back(make_pair(num_map[num_str], num_str));
    }

    sort(num_list.begin(), num_list.end());

    for (auto& num : num_list) {
        result += num.second + " ";
    }

    return result;
}