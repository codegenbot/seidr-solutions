#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers) {
    vector<string> nums;
    string temp = "";
    for (char c : numbers) {
        if (c == ' ') {
            nums.push_back(temp);
            temp = "";
        } else {
            temp += c;
        }
    }
    nums.push_back(temp);

    sort(nums.begin(), nums.end());

    string result = "";
    for (string num : nums) {
        result += num + " ";
    }

    return result;
}