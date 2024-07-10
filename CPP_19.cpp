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
    for(auto& p : num_map){
        rev_map[p.second] = p.first;
    }
    
    vector<int> nums;
    stringstream ss(numbers);
    string token;
    while(getline(ss, token, ' ')){
        nums.push_back(num_map[token]);
    }
    
    sort(nums.begin(), nums.end());
    
    string sorted_numbers;
    for(auto num : nums){
        sorted_numbers += rev_map[num] + " ";
    }
    
    return sorted_numbers;
}