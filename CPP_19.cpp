#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

string sort_numbers(const string &numbers_str) {
    map<string, int> number_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};

    vector<string> numbers;
    stringstream ss(numbers_str);
    string temp;
    while (ss >> temp) {
        numbers.push_back(temp);
    }

    sort(numbers.begin(), numbers.end(), [&](const string &a, const string &b) {
        return number_map[a] < number_map[b];
    });

    string sorted_numbers;
    for (const string &num : numbers) {
        sorted_numbers += num + " ";
    }

    return sorted_numbers;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");

    return 0;
}