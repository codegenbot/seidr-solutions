string sort_numbers(string numbers){
    map<string, int> number_map = {
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
    
    string result = "";
    string current_num;
    
    for (int i = 0; i < numbers.size(); ++i) {
        if (numbers[i] != ' ') {
            current_num += numbers[i];
        } else {
            result += current_num + " ";
            current_num = "";
        }
    }
    result += current_num;
    
    vector<pair<int, string>> sorted_numbers;
    current_num = "";
    
    for (int i = 0; i < result.size(); ++i) {
        if (result[i] != ' ') {
            current_num += result[i];
        } else {
            sorted_numbers.push_back(make_pair(number_map[current_num], current_num));
            current_num = "";
        }
    }
    sorted_numbers.push_back(make_pair(number_map[current_num], current_num));
    
    sort(sorted_numbers.begin(), sorted_numbers.end());
    
    string sorted_result = "";
    for (int i = 0; i < sorted_numbers.size(); ++i) {
        sorted_result += sorted_numbers[i].second + " ";
    }
    
    return sorted_result;
}