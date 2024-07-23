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
    string result = "";
    map<int, string> rev_num_map;
    for(auto const& pair : num_map){
        rev_num_map[pair.second] = pair.first;
    }
    
    vector<int> sorted_nums;
    stringstream ss(numbers);
    string token;
    while(getline(ss, token, ' ')){
        sorted_nums.push_back(num_map[token]);
    }
    sort(sorted_nums.begin(), sorted_nums.end());
    
    for(auto num : sorted_nums){
        result += rev_num_map[num] + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}