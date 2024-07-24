map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    map<int, string> reverse_map;
    for(auto const &pair : number_map){
        reverse_map[pair.second] = pair.first;
    }
    string result = "";
    for(auto const &pair : reverse_map){
        if(numbers.find(pair.second) != string::npos){
            result += pair.second;
            result += " ";
        }
    }
    return result;
}