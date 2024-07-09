#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int bestCut = 0;
    int minDiff = INT_MAX;
    
    for (int i = 1; i < nums.size(); ++i) {
        int sum1 = 0, sum2 = 0;
        for (int j = 0; j < i; ++j) {
            sum1 += nums[j];
        }
        for (int j = i; j < nums.size(); ++j) {
            sum2 += nums[j];
        }
        
        int diff = abs(sum1 - sum2);
        if (diff < minDiff) {
            minDiff = diff;
            bestCut = i;
        }
    }
    
    for (int i = 0; i < bestCut; ++i) {
        cout << nums[i] << endl;
    }
    cout << "---" << endl;
    for (int i = bestCut; i < nums.size(); ++i) {
        cout << nums[i] << endl;
    }

    return 0;
}