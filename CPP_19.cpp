#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

string sort_numbers(const string& nums_str) {
    vector<string> numbers;
    string num;
    for (char c : nums_str) {
        if (c == ' ') {
            numbers.push_back(num);
            num.clear();
        } else {
            num += c;
        }
    }
    numbers.push_back(num);

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

    sort(numbers.begin(), numbers.end(), [&](const string &a, const string &b) {
        return number_map[a] < number_map[b];
    });

    string sorted_nums;
    for (const string& n : numbers) {
        sorted_nums += n + ' ';
    }
    sorted_nums.pop_back();

    return sorted_nums;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}