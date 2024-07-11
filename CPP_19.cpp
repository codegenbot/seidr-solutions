map<string, int> num_to_val = {
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

string sort_numbers(string numbers) {
    map<int, string> val_to_num;
    string res;
    string token;
    size_t pos = 0;
    
    while ((pos = numbers.find(" ")) != string::npos) {
        token = numbers.substr(0, pos);
        val_to_num[num_to_val[token]] = token;
        numbers.erase(0, pos + 1);
    }
    
    token = numbers;
    val_to_num[num_to_val[token]] = token;
    
    for (const auto &pair : val_to_num) {
        res += pair.second + " ";
    }
    res.pop_back(); // Remove extra space at the end
    
    return res;
}