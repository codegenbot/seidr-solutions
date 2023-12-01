#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>
#include <cassert>
using namespace std;

string sort_numbers(string numbers);

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
}

string sort_numbers(string numbers) {
    map<string, int> num_map;
    num_map["zero"] = 0;
    num_map["one"] = 1;
    num_map["two"] = 2;
    num_map["three"] = 3;
    num_map["four"] = 4;
    num_map["five"] = 5;
    num_map["six"] = 6;
    num_map["seven"] = 7;
    num_map["eight"] = 8;
    num_map["nine"] = 9;

    vector<string> num_list;
    stringstream ss(numbers);
    string word;
    while (ss >> word) {
        num_list.push_back(word);
    }

    sort(num_list.begin(), num_list.end(), [&](const string& a, const string& b) {
        return num_map[a] < num_map[b];
    });

    string result;
    for (const string& num : num_list) {
        result += num + " ";
    }
    result.pop_back(); // Remove the last space

    return result;
}