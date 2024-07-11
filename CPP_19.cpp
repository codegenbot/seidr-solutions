#include <vector>
#include <algorithm>

using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap = {{"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3},
                                {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7},
                                {"eight", 8}, {"nine", 9}};
    vector<string> nums;
    string temp;

    // Split the input string into individual numbers
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

    // Sort the numbers
    sort(nums.begin(), nums.end(), [&numMap](string a, string b) {
        return numMap[a] < numMap[b];
    });

    // Join the sorted numbers back into a single string
    string result = "";
    for (const auto& num : nums) {
        result += num + " ";
    }

    return result;
}