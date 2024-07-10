map<string, int> number_map{
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
    map<int, string> reverse_number_map;
    for(auto const& pair : number_map){
        reverse_number_map[pair.second] = pair.first;
    }
    
    vector<int> nums;
    string result = "";
    
    istringstream iss(numbers);
    string word;
    while (iss >> word){
        nums.push_back(number_map[word]);
    }
    
    sort(nums.begin(), nums.end());
    
    for (int num : nums){
        result += reverse_number_map[num] + " ";
    }
    
    return result.substr(0, result.size() - 1);
}