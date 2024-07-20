#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

using namespace std;

string sort_numbers(const string &numbers) {
    map<string, int> num_map = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, 
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, 
                                {"eight", 8}, {"nine", 9}};

    vector<string> nums;
    string num;

    for (const auto &c : numbers) {
        if (c == ' ') {
            nums.push_back(num);
            num.clear();
        } else {
            num += c;
        }
    }
    nums.push_back(num);

    sort(nums.begin(), nums.end(), [&](const string &a, const string &b) {
        return num_map[a] < num_map[b];
    });

    string result;
    for (const auto &n : nums) {
        result += n + " ";
    }

    result.pop_back(); // Remove the last space

    return result;
}

int main() {
    assert (sort_numbers("six five four three two one zero") == "zero one two three four five six");
    return 0;
}