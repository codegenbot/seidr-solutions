#include <algorithm>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};

    vector<string> nums;
    string num;
    for (char &c : numbers) {
        if (isdigit(c)) {
            c = ' ';
        }
    }

    stringstream ss(numbers);
    while (ss >> num) {
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end(), [&numMap](string a, string b) {
        return to_string(numMap.at(a)) < to_string(numMap.at(b));
    });

    string result;
    for (const auto &n : nums) {
        result += n + " ";
    }
    return result.substr(0, result.size() - 1);
}