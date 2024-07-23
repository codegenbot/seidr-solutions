#include <vector>
#include <algorithm>

string sort_numbers(string numbers) {
    vector<string> nums;
    string num;

    for (char c : numbers) {
        if (c == ' ') {
            nums.push_back(num);
            num = "";
        } else {
            num += c;
        }
    }
    nums.push_back(num);

    sort(nums.begin(), nums.end());

    string result = "";
    for (string n : nums) {
        result += n + " ";
    }

    return result.substr(0, result.length() - 1);
}