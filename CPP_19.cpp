map<string, int> num_words = {
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
    vector<int> nums;
    stringstream ss(numbers);
    string num_word;

    while (ss >> num_word) {
        nums.push_back(num_words[num_word]);
    }

    sort(nums.begin(), nums.end());

    for (int num : nums) {
        for (auto it : num_words) {
            if (it.second == num) {
                result += it.first + " ";
                break;
            }
        }
    }

    result.pop_back(); // Remove the extra space at the end
    return result;
}