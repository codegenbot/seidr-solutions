#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums;
    int n;
    while (cin >> n && n != -1) {
        nums.push_back(n);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += max((num + 2) / 3, 0);
    }
    
    cout << sum << "\n";
    
    return 0;
}