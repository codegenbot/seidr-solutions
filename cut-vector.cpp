#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    if (nums.size() > 1) {
        int sum = 0;
        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
        }
        
        int target = sum / 2;
        int prefixSum = 0;
        int index = 0;
        
        while (prefixSum < target) {
            prefixSum += nums[index];
            ++index;
        }
        
        if (prefixSum * 2 == sum) {
            for (int i = 0; i < index; ++i) {
                cout << nums[i] << endl;
            }
            cout << "---" << endl;
            for (int i = index; i < nums.size(); ++i) {
                cout << nums[i] << endl;
            }
        }
    }

    return 0;
}