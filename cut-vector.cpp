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
    
    int min_abs_diff = std::abs(2 * nums[0] - sum);
    int cut_index = 0;
    for (int i = 1; i < n; i++) {
        if (std::abs(2 * nums[i] - sum) < min_abs_diff) {
            min_abs_diff = std::abs(2 * nums[i] - sum);
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