#include <sstream>
#include <vector>
#include <algorithm>

string sort_numbers(string numbers) {
    map<string, int> num_map = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
        {"eight", 8}, {"nine", 9}
    };
    
    map<int, string> rev_map = {
        {0, "zero"}, {1, "one"}, {2, "two"}, {3, "three"},
        {4, "four"}, {5, "five"}, {6, "six"}, {7, "seven"},
        {8, "eight"}, {9, "nine"}
    };

    istringstream iss(numbers);
    vector<int> num_list;
    string num_str;

    while (iss >> num_str) {
        num_list.push_back(num_map[num_str]);
    }

    sort(num_list.begin(), num_list.end());

    ostringstream oss;
    for (size_t i = 0; i < num_list.size(); ++i) {
        if (i != 0) oss << " ";
        oss << rev_map[num_list[i]];
    }

    return oss.str();
}