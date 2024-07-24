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

string sort_numbers(string numbers){
    map<int, string> rev_number_map;
    for(auto it : number_map){
        rev_number_map[it.second] = it.first;
    }

    string result;
    int num;
    while(numbers.find(' ') != string::npos){
        string word = numbers.substr(0, numbers.find(' '));
        numbers = numbers.substr(numbers.find(' ') + 1);
        num = number_map[word];
        result += word + " ";
    }
    num = number_map[numbers];
    result += numbers;

    string sorted_result;
    for(int i = 0; i <= 9; i++){
        if(result.find(rev_number_map[i]) != string::npos){
            sorted_result += rev_number_map[i] + " ";
        }
    }

    sorted_result.pop_back(); // Remove the extra space at the end
    return sorted_result;
}