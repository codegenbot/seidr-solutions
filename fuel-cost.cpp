#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (cin >> n) {
        if (n == -1) break;
        nums.push_back(n);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += (int)floor(num / 3.0) - 2;
    }
    
    cout << sum << "\n";
    
    return 0;
}