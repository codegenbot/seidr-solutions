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

void sort_numbers(string numbers){
    map<int, string> reverse_map;
    for(const auto& num_str : number_map){
        reverse_map[num_str.second] = num_str.first;
    }

    vector<string> nums;
    stringstream ss(numbers);
    string word;
    while(ss >> word){
        nums.push_back(word);
    }

    sort(nums.begin(), nums.end(), [&](const string &a, const string &b){
        return number_map[a] < number_map[b];
    });

    for(const auto& num : nums){
        cout << num << " ";
    }
}