#include <algorithm>
#include<string>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> nums;
    string temp;

    for (int i = 0; i < numbers.length(); i++) {
        while (i + 1 <= numbers.length() && !isalpha(numbers[i])) {
            i++;
        }
        temp = "";
        while (i + 1 <= numbers.length() && isalpha(numbers[i])) {
            temp += tolower(numbers[i]);
            i++;
        }

        if (!temp.empty()) {
            nums.push_back(temp);
        }
    }

    sort(nums.begin(), nums.end(), [&numMap](string a, string b) {
        return numMap[a] < numMap[b];
    });

    string result = "";
    for (auto str : nums) {
        result += str + " ";
    }
    return result.substr(0, result.length() - 1);
}