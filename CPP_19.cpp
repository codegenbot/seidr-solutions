#include <algorithm>
#include <string>
#include <map>
using namespace std;

string sort_numbers(string numbers) {
    map<string, int> numMap;
    numMap["zero"] = 0; numMap["one"] = 1; numMap["two"] = 2;
    numMap["three"] = 3; numMap["four"] = 4; numMap["five"] = 5;
    numMap["six"] = 6; numMap["seven"] = 7; numMap["eight"] = 8;
    numMap["nine"] = 9;

    vector<string> nums;
    string temp;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == ' ') {
            nums.push_back(temp);
            temp = "";
        } else {
            temp += numbers[i];
        }
    }
    nums.push_back(temp);

    sort(nums.begin(), nums.end(), [&numMap](string a, string b) {
        return numMap[a] < numMap[b];
    });

    string result;
    for (int i = 0; i < nums.size(); i++) {
        if (i == nums.size() - 1)
            result += nums[i];
        else
            result += nums[i] + " ";
    }

    return result;
}