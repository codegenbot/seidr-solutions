#include <iostream>
#include <vector>

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
        sum += (num / 3) - 2;
    }
    
    cout << sum << "\n";
    
    return 0;
}