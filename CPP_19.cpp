#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cassert>

using namespace std;

string sort_numbers(const string &numbers) {
    map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    
    vector<string> num_strings;
    string num_str;
    stringstream ss(numbers);
    while (ss >> num_str) {
        num_strings.push_back(num_str);
    }

    sort(num_strings.begin(), num_strings.end(), [&](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });

    string result;
    for (const string &num : num_strings) {
        result += num + " ";
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    
    return 0;
}