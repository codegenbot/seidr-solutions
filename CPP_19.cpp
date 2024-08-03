#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

string sort_numbers(const string& input) {
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

    vector<string> numbers;
    string temp;
    for (char c : input) {
        if (c == ' ') {
            numbers.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    numbers.push_back(temp);

    sort(numbers.begin(), numbers.end(), [&](const string &a, const string &b) {
        return number_map[a] < number_map[b];
    });

    string sorted_numbers;
    for (const auto& num : numbers) {
        sorted_numbers += num + " ";
    }
    sorted_numbers.pop_back(); 

    return sorted_numbers;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    
    return 0;
}