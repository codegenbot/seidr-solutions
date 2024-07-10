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
    
    map<int, int> num_idx;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (num_idx.find(complement) != num_idx.end()) {
            cout << complement << endl << nums[i] << endl;
            break;
        }
        num_idx[nums[i]] = i;
    }
    
    return 0;
}