#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> nums;
    int num;

    while (cin >> num) {
        nums.push_back(num);
    }

    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }

    int half_sum = sum / 2;
    int prefix_sum = 0;
    int cut_index = -1;

    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        if (prefix_sum >= half_sum) {
            cut_index = i;
            if (prefix_sum == half_sum) {
                break;
            }
            if (std::abs(prefix_sum - half_sum) > std::abs(prefix_sum - nums[cut_index] - half_sum)) {
                cut_index--;
            }
            break;
        }
    }

    if (n % 2 == 0) {
        if (std::abs(prefix_sum - half_sum) <= std::abs(prefix_sum - nums[cut_index] - half_sum)) {
            cout << "1" << endl;
            for (int i = 0; i <= cut_index; i++) {
                cout << nums[i] << endl;
            }
            cout << "0" << endl;
        } else {
            cout << "1" << endl;
            for (int i = 0; i <= cut_index; i++) {
                cout << nums[i] << endl;
            }
            cout << "1" << endl;
            for (int i = cut_index + 1; i < n; i++) {
                cout << nums[i] << endl;
            }
        }
    } else {
        if (std::abs(prefix_sum - half_sum) < std::abs(prefix_sum - nums[cut_index] - half_sum)) {
            cout << "1" << endl;
            for (int i = 0; i <= cut_index; i++) {
                cout << nums[i] << endl;
            }
            cout << "0" << endl;
        } else {
            cout << "1" << endl;
            for (int i = 0; i <= cut_index; i++) {
                cout << nums[i] << endl;
            }
            cout << "1" << endl;
            for (int i = cut_index + 1; i < n; i++) {
                cout << nums[i] << endl;
            }
        }
    }

    return 0;
}