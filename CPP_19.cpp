#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

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

string sort_numbers(string numbers);

string sort_numbers(string numbers) {
    map<int, string> rev_num_map;
    for (const auto& pair : num_map) {
        rev_num_map[pair.second] = pair.first;
    }

    vector<string> num_list;
    stringstream ss(numbers);
    string token;
    while (ss >> token) {
        num_list.push_back(token);
    }

    sort(num_list.begin(), num_list.end(), [&](const string& a, const string& b) {
        return num_map[a] < num_map[b];
    });

    string result;
    for (const string& num : num_list) {
        result += num + " ";
    }

    return result.substr(0, result.size() - 1);
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");

    return 0;
}