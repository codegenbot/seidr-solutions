#include <vector>
#include <initializer_list> 
#include <iostream>

using namespace std;

int specialFilter(vector<int> nums) {
    int count = 0;
    for (int num : nums) {
        if (abs(num) > 10 && (num % 10) % 2 != 0 && (num / 10) % 10 % 2 != 0) {
            count++;
        }
    }
    return count;

}

int main() {
    vector<int> nums;
    for(int i = 123; i <= 789; i++) {
        nums.push_back(i);
    }
    cout << specialFilter(nums);
}