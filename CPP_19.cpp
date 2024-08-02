#include <algorithm>
#include <sstream>

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                 {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                 {"eight", 8}, {"nine", 9}};
    vector<string> nums;
    stringstream ss(numbers);
    string num;
    while (getline(ss, num, ' ')) {
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end(), [&numMap](string a, string b) {
        return numMap[a] < numMap[b];
    });
    return join(nums, " ");
}

string join(vector<string>& vec, const string& delimiter) {
    string result;
    for (const auto& s : vec) {
        result += s + delimiter;
    }
    if (!result.empty()) {
        result.pop_back(); // remove trailing delimiter
    }
    return result;
}