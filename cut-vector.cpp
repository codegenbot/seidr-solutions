#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num && !cin.eof()) {
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
    }
    
    int target = sum / 2;
    int prefixSum = 0;
    int index = 0;
    
    while (prefixSum < target && index < nums.size()) {
        prefixSum += nums[index];
        ++index;
    }
    
    if (prefixSum == target) {
        for (int i = 0; i < index; ++i) {
            cout << nums[i] << endl;
        }
        cout << endl;
        for (int i = index; i < nums.size(); ++i) {
            cout << nums[i] << endl;
        }
    } else {
        int diff1 = target - prefixSum;
        int diff2 = prefixSum - nums[index - 1];
        if (diff1 <= diff2) {
            for (int i = 0; i < index; ++i) {
                cout << nums[i] << endl;
            }
            cout << endl;
            for (int i = index; i < nums.size(); ++i) {
                cout << nums[i] << endl;
            }
        } else {
            for (int i = 0; i < index - 1; ++i) {
                cout << nums[i] << endl;
            }
            cout << endl;
            cout << nums[index - 1] << endl;
            for (int i = index; i < nums.size(); ++i) {
                cout << nums[i] << endl;
            }
        }
    }
    
    return 0;
}