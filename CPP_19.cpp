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
    for(auto const& pair : num_map){
        rev_num_map[pair.second] = pair.first;
    }

    vector<int> num_list;
    string num_str;
    for(int i = 0; i < numbers.size(); i++){
        if(numbers[i] == ' '){
            num_list.push_back(num_map[num_str]);
            num_str = "";
        } else {
            num_str += numbers[i];
        }
    }
    num_list.push_back(num_map[num_str]);

    sort(num_list.begin(), num_list.end());

    string sorted_str;
    for(auto num : num_list){
        sorted_str += rev_num_map[num] + " ";
    }

    sorted_str.pop_back(); // Remove extra space at the end
    return sorted_str;
}