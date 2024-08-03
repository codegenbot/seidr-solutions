#include <vector>
using namespace std;

int luhnCheck(vector<int>& nums) {
    int sum = 0;
    bool doubling = false;
    for(int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        if(doubling) {
            num *= 2;
            if(num > 9) {
                num -= 9;
            }
        }
        sum += num;
        doubling = !doubling;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << luhnCheck(nums) << endl;
    return 0;
}