#include <algorithm>
#include <string>
#include <map>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> nums;
    string temp = "";
    for (char c : numbers) {
        if (isdigit(c)) {
            continue;
        }
        if (!temp.empty()) {
            nums.push_back(temp);
            temp = "";
        }
        temp += tolower(c);
    }
    nums.push_back(temp);

    sort(nums.begin(), nums.end(), [&numMap](string a, string b) {
        return numMap[a] < numMap[b];
    });

    string result = "";
    for (const auto& num : nums) {
        result += num + " ";
    }

    return result.substr(0, result.size() - 1);
}