#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> nums;
    int num, n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    
    int half_sum = sum / 2;
    int prefix_sum = 0;
    int cut_index = -1;
    int min_diff = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        prefix_sum += nums[i];
        if (abs(sum - 2 * prefix_sum) < min_diff) {
            min_diff = abs(sum - 2 * prefix_sum);
            cut_index = i;
        }
    }
    
    cout << "2" << endl;
    for (int i = 0; i <= cut_index; i++) {
        cout << nums[i] << endl;
    }
    cout << "0" << endl;

    return 0;
}