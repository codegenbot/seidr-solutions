#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int num;

    while (cin >> num) {
        nums.push_back(num);
    }

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

    if (prefixSum == target) {
        for (int i = 0; i < index; ++i) {
            cout << nums[i] << " ";
        }
        cout << endl;
        for (int i = index; i < nums.size(); ++i) {
            cout << nums[i] << " ";
        }
    } else {
        int diff1 = abs(prefixSum - target);
        int diff2 = abs(prefixSum - nums[index] - target);
        
        if (diff1 <= diff2) {
            for (int i = 0; i < index; ++i) {
                cout << nums[i] << " ";
            }
            cout << endl;
            for (int i = index; i < nums.size(); ++i) {
                cout << nums[i] << " ";
            }
        } else {
            for (int i = 0; i <= index; ++i) {
                cout << nums[i] << " ";
            }
            cout << endl;
            for (int i = index + 1; i < nums.size(); ++i) {
                cout << nums[i] << " ";
            }
        }
    }

    return 0;
}