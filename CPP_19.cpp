string sort_numbers(string numbers){
    map<string, int> numeral_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};

    map<int, string> reverse_map;
    for(auto it : numeral_map){
        reverse_map[it.second] = it.first;
    }

    string result = "";

    size_t pos = 0;
    while((pos = numbers.find(" ")) != string::npos){
        string token = numbers.substr(0, pos);
        numbers.erase(0, pos + 1);

        result += reverse_map[numeral_map[token]] + " ";
    }

    result += reverse_map[numeral_map[numbers]];

    return result;
}