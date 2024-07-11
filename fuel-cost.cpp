#include <iostream>
#include <vector>
#include <algorithm>

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
        sum += (num / 3) - 2;
        if (num % 3 > 0) sum--; // Adjust for proper rounding down
    }
    
    cout << sum << "\n";
    
    return 0;
}