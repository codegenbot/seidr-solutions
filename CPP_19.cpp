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
    map<int, string> reverse_num_map;
    for(auto const& pair : num_map){
        reverse_num_map[pair.second] = pair.first;
    }
    
    vector<int> num_list;
    stringstream ss(numbers);
    string token;
    while(getline(ss, token, ' ')){
        num_list.push_back(num_map[token]);
    }
    
    sort(num_list.begin(), num_list.end());
    
    for(int num : num_list){
        result += reverse_num_map[num] + " ";
    }
    
    result.pop_back(); // Remove the extra space at the end
    return result;
}