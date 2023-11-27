#include <iostream>
#include <string>
#include <vector>

using namespace std;

string int_to_mini_roman(int number) {
    string roman = "";
    vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> romans = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};

    for (int i = 0; i < nums.size(); i++) {
        while (number >= nums[i]) {
            roman += romans[i];
            number -= nums[i];
        }
    }

    return roman;
}

int main() {
    assert(int_to_mini_roman(1000) == "m");
    assert(int_to_mini_roman(900) == "cm");
    assert(int_to_mini_roman(27) == "xxvii");
    assert(int_to_mini_roman(3999) == "mmmcmxcix");

    cout << "All test cases passed." << endl;

    return 0;
}