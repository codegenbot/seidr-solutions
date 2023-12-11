#include <vector>
#include <iostream>
using namespace std;

int main() {
    int target;
    vector<int> nums;
    cin >> target;
    while (cin >> nums) {}
    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                cout << nums[i] << " " << nums[j] << endl;
                return 0;
            }
        }
    }
    cout << "No pair found." << endl;
    return 1;
}