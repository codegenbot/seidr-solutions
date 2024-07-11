#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n, target;
    cin >> n;
    vector<int> nums;
    nums.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;
    
    map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        if (mp.find(target - nums[i]) != mp.end()) {
            std::cout << nums[i] << std::endl;
            std::cout << target - nums[i] << std::endl;
            break;
        }
        mp[nums[i]] = i;
    }
    
    return 0;
}