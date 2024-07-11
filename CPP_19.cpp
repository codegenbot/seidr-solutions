#include <string>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> nums;
    string temp;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == ' ') {
            continue;
        }
        temp = "";
        while (i < numbers.size() && numbers[i] != ' ') {
            temp += numbers[i];
            i++;
        }
        nums.push_back(temp);
    }

    sort(nums.begin(), nums.end());

    string result = "";
    for (const auto& num : nums) {
        result += num + " ";
    }

    return result;
}