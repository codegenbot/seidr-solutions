#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string sort_numbers(string numbers) {
    vector<string> nums;
    string num;

    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            nums.push_back(num);
            num = "";
        } else {
            num += numbers[i];
        }
    }
    nums.push_back(num);

    sort(nums.begin(), nums.end());

    string result;
    for (int i = 0; i < nums.size(); i++) {
        result += nums[i] + " ";
    }

    return result.substr(0, result.length() - 1);
}