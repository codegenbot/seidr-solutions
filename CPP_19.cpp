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
    
    vector<int> nums;
    stringstream ss(numbers);
    string word;
    while(ss >> word){
        nums.push_back(num_map[word]);
    }
    
    sort(nums.begin(), nums.end());
    
    string result = "";
    for(int num : nums){
        result += rev_num_map[num] + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}