#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string sort_numbers(const string &numbers) {
    static map<string, int> number_map = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
        {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
        {"eight", 8}, {"nine", 9}
    };

    vector<string> nums;
    string num;
    for (char c : numbers) {
        if (c == ' ') {
            nums.push_back(num);
            num.clear();
        } else {
            num += c;
        }
    }
    nums.push_back(num);

    sort(nums.begin(), nums.end(), [&](const string &a, const string &b) {
        return number_map[a] < number_map[b];
    });

    string sorted_numbers;
    for (const string &n : nums) {
        sorted_numbers += n + " ";
    }
    
    sorted_numbers.pop_back(); // Remove the last space
    return sorted_numbers;
}

int main() {
    assert(sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}