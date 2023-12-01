#include <iostream>
#include <string>
#include <vector>
using namespace std;

string int_to_mini_romank(int number) {
    vector<int> nums = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> romans = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    string result = "";
    
    for(int i=0; i<nums.size(); i++){
        while(number >= nums[i]){
            result += romans[i];
            number -= nums[i];
        }
    }
    
    return result;
}

int main() {
    assert(int_to_mini_romank(1000) == "m");
    assert(int_to_mini_romank(900) == "cm");
    assert(int_to_mini_romank(500) == "d");
    assert(int_to_mini_romank(400) == "cd");
    assert(int_to_mini_romank(100) == "c");
    assert(int_to_mini_romank(90) == "xc");
    assert(int_to_mini_romank(50) == "l");
    assert(int_to_mini_romank(40) == "xl");
    assert(int_to_mini_romank(10) == "x");
    assert(int_to_mini_romank(9) == "ix");
    assert(int_to_mini_romank(5) == "v");
    assert(int_to_mini_romank(4) == "iv");
    assert(int_to_mini_romank(1) == "i");
    
    return 0;
}