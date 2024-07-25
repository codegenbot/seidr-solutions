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
    string sorted_numbers = "";
    map<int, string> reverse_map;
    
    for (const auto& kv : number_map) {
        reverse_map[kv.second] = kv.first;
    }
    
    vector<int> num_list;
    stringstream ss(numbers);
    string word;
    while (ss >> word){
        num_list.push_back(number_map[word]);
    }
    
    sort(num_list.begin(), num_list.end());
    
    for (int num : num_list){
        sorted_numbers += reverse_map[num] + " ";
    }
    
    sorted_numbers.pop_back(); // Remove the extra space at the end
    return sorted_numbers;
}