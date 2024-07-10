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
    string temp = "";
    for (char c : numbers){
        if (c == ' '){
            result += temp + " ";
            temp = "";
        }
        else{
            temp += c;
        }
    }
    result += temp;

    map<int, string> rev_num_map;
    for (auto it : num_map){
        rev_num_map[it.second] = it.first;
    }

    string sorted_result = "";
    for (int i = 0; i <= 9; i++){
        if (result.find(rev_num_map[i]) != string::npos){
            sorted_result += rev_num_map[i] + " ";
        }
    }

    return sorted_result;
}