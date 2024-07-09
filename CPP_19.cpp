#include <algorithm>

string sort_numbers(const string& numbers) {
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

    vector<string> numbers_vec;

    stringstream ss(numbers);
    string num;
    while (ss >> num) {
        numbers_vec.push_back(num);
    }

    sort(numbers_vec.begin(), numbers_vec.end(), [&](const string &a, const string &b) {
        return number_map[a] < number_map[b];
    });

    string result;
    for (const string& num : numbers_vec) {
        result += num + " ";
    }

    return result;
}