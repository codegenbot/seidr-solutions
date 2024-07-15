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

    string result;
    for(auto it : rev_num_map){
        if(numbers.find(it.second) != string::npos){
            result += it.second + " ";
        }
    }
    
    result.pop_back(); // Remove the extra space at the end
    return result;
}