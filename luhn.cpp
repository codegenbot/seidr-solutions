#include <vector>
using namespace std;

int luhn(vector<int> nums) {
    int sum = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(i % 2 == 1) {
            int temp = nums[i] * 2;
            if(temp > 9) temp -= 9;
            sum += temp;
        } else {
            sum += nums[i];
        }
    }
    return sum;
}