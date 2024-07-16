#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    cin >> target;
    
    map<int, int> numIndex;
    for (int i = 0; i < n; ++i) {
        if (numIndex.find(target - nums[i]) != numIndex.end()) {
            cout << nums[numIndex[target - nums[i]] << endl;
            cout << nums[i] << endl;
            break;
        }
        numIndex[nums[i]] = i;
    }
    
    return 0;
}