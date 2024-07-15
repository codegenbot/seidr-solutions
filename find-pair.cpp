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
    pair<int, int> result;
    for (int i = 0; i < n; ++i) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            result = make_pair(numIndex[complement], i);
            break;
        }
        numIndex[nums[i]] = i;
    }
    
    if(result.first != 0 || result.second != 0) {
        cout << nums[result.first] << endl;
        cout << nums[result.second] << endl;
    } else {
        cout << "No pair found." << endl;
    }
    
    return 0;
}