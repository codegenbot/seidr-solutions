#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    
    map<int, int> numIndex;
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            cout << complement << endl << nums[i];
            break;
        }
        numIndex[nums[i]] = i;
    }
    
    return 0;
}