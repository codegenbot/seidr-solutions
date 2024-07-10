#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    
    map<int, int> seen;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            std::cout << complement << std::endl;
            std::cout << nums[i] << std::endl;
            break;
        }
        seen[nums[i]] = i;
    }
    
    return 0;
}