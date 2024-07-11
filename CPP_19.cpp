#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> nums;
    string temp;
    for (int i = 0; i < numbers.length(); i++) {
        if (numbers[i] == ' ') {
            nums.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    nums.push_back(temp);

    sort(nums.begin(), nums.end());
    string result;
    for (int i = 0; i < nums.size(); i++) {
        result += nums[i] + " ";
    }

    return result.substr(0, result.length() - 1);
}