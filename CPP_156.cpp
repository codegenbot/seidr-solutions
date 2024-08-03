#include <string>
#include <vector>

string int_to_mini_romank(int number);

string int_to_mini_romank(int number){
    vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> romans = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    string result = "";
    int index = 0;

    while (number > 0) {
        if (number >= nums[index]) {
            result += romans[index];
            number -= nums[index];
        } else {
            index++;
        }
    }

    return result;
}