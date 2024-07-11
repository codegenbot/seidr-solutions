#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums;
    int count, n;
    
    cin >> count;
    for (int i = 0; i < count; ++i) {
        cin >> n;
        nums.push_back(n);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += (int)(floor((double)num / 3)) - 2;
    }
    
    cout << sum << "\n";
    
    return 0;
}