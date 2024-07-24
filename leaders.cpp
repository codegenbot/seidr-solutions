#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
        if(cin.peek() == '\n') break;
    }
    
    int n = nums.size();
    int maxRight = nums[n-1];
    vector<int> leaders;

    for (int i = n-2; i >= 0; i--) {
        if (nums[i] > maxRight) {
            leaders.insert(leaders.begin(), nums[i]);
            maxRight = nums[i];
        }
    }

    for (int leader : leaders) {
        cout << leader << " ";
    }

    return 0;
}