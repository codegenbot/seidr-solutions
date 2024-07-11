#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    vector<int> nums;
    while (true) {
        int input;
        if (!(cin >> input)) break;
        nums.push_back(input);
    }
    
    int sum = 0;
    for (int num : nums) {
        sum += num / 3 - 2;
    }
    
    cout << sum << endl;
    
    return 0;
}