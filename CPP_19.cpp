map<string, int> num_dict = {
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
    stringstream ss(numbers);
    string word;
    vector<string> num_vec;

    while (ss >> word) {
        num_vec.push_back(word);
    }

    sort(num_vec.begin(), num_vec.end(),
        [&num_dict](const string& a, const string& b) {
            return num_dict[a] < num_dict[b];
        });

    string result = "";
    for (const string& num : num_vec) {
        result += num + " ";
    }

    result.pop_back();  // Remove trailing space
    return result;
}