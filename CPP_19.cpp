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
    map<int, string> rev_num_map;
    for(auto it : num_map){
        rev_num_map[it.second] = it.first;
    }

    vector<int> sorted_nums;
    stringstream ss(numbers);
    string num_str;
    while(ss >> num_str){
        sorted_nums.push_back(num_map[num_str]);
    }
    sort(sorted_nums.begin(), sorted_nums.end());

    string sorted_str;
    for(auto num : sorted_nums){
        sorted_str += rev_num_map[num] + " ";
    }

    sorted_str.pop_back(); // Remove extra space at the end
    return sorted_str;
}