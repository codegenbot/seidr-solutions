#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cin >> target;

    map<int, int> numIndex;
    for (int i = 0; i < n; i++) {
        int complement = target - nums[i];
        if (numIndex.find(complement) != numIndex.end()) {
            cout << nums[i] << endl;
            cout << complement << endl;
            break;
        }
        numIndex[nums[i]] = i;
    }

    return 0;
}