#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int num;

    while (cin >> num || !cin.eof()) {
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

    int diff1 = abs(target - prefixSum);
    int diff2 = abs(target - (prefixSum - nums[index - 1]));

    if (diff1 <= diff2) {
        for (int i = 0; i < index; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    } else {
        for (int i = 0; i < index - 1; ++i) {
            cout << nums[i] << endl;
        }
        cout << 0 << endl;
    }

    return 0;
}