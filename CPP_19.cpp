#include <algorithm>
#include <sstream>
#include <map>
#include <vector>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
    map<int, string> revNumMap;

    for (auto const& pair : numMap) {
        revNumMap[pair.second] = pair.first;
    }

    vector<int> nums;
    stringstream ss(numbers);
    string numStr;
    while (ss >> numStr) {
        nums.push_back(numMap[numStr]);
    }

    sort(nums.begin(), nums.end());

    string result;
    for (int num : nums) {
        result += revNumMap[num] + " ";
    }

    return result;
}