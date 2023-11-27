#include <iostream>
using namespace std;

int count_nums(vector<int> n) {
    int count = 0;
    for (int i = 0; i < n.size(); i++) {
        int num = n[i];
        int sumOfDigits = 0;
        
        while (num != 0) {
            sumOfDigits += abs(num % 10);
            num /= 10;
        }
        
        if (sumOfDigits > 0) {
            count++;
        }
    }
    return count;
}

int main() {
    vector<int> nums1 = {};
    cout << count_nums(nums1) << endl;  // 0
    
    vector<int> nums2 = {-1, 11, -11};
    cout << count_nums(nums2) << endl;  // 1
    
    vector<int> nums3 = {1, 1, 2};
    cout << count_nums(nums3) << endl;  // 3
    
    return 0;
}