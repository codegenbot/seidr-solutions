#include <map>
#include <algorithm>
#include <string>

string sort_numbers(string numbers) {
    map<string, int> num_map = {
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

    vector<string> num_vec;
    stringstream ss(numbers);
    string token;

    while (getline(ss, token, ' ')) {
        num_vec.push_back(token);
    }

    sort(num_vec.begin(), num_vec.end(), [&](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });

    string result;
    for (const string& num : num_vec) {
        result += num + " ";
    }

    return result;
}