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

string sort_numbers(string numbers) {
    vector<string> number_words;
    stringstream ss(numbers);
    string word;
    while (ss >> word) {
        number_words.push_back(word);
    }
    
    sort(number_words.begin(), number_words.end(), [&](const string &a, const string &b) {
        return number_map[a] < number_map[b];
    });
    
    string result;
    for (const string &word : number_words) {
        result += word + " ";
    }
    
    result.pop_back(); // Remove extra space at the end
    return result;
}