string sort_numbers(string numbers){
    map<string, int> num_map{
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
    
    vector<pair<int, string>> num_vec;
    
    stringstream ss(numbers);
    string word;
    while (ss >> word) {
        num_vec.push_back({num_map[word], word});
    }
    
    sort(num_vec.begin(), num_vec.end());
    
    string result;
    for (const auto& num : num_vec) {
        result += num.second + " ";
    }
    
    return result.substr(0, result.size() - 1);
}