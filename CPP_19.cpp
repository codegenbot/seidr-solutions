#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <cassert>

using namespace std;

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

    vector<string> split_numbers;
    string temp;
    for (char c : numbers) {
        if (c != ' ')
            temp += c;
        else {
            split_numbers.push_back(temp);
            temp.clear();
        }
    }
    split_numbers.push_back(temp);

    sort(split_numbers.begin(), split_numbers.end(), [&](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });

    string sorted_str;
    for (const string &num : split_numbers) {
        sorted_str += num + " ";
    }
    sorted_str.pop_back(); // remove extra space at the end

    return sorted_str;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    
    return 0;
}