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
    
    string result = "";
    for(auto const& pair : rev_num_map){
        if(numbers.find(pair.second) != string::npos){
            result += pair.second + " ";
        }
    }
    
    return result;
}