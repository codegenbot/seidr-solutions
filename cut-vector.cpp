#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for (int i = 1; i < nums.size(); i++) {
        int left_sum = 0;
        int right_sum = 0;
        
        for (int j = 0; j < i; j++) {
            left_sum += nums[j];
        }
        
        for (int j = i; j < nums.size(); j++) {
            right_sum += nums[j];
        }
        
        int diff = abs(left_sum - right_sum);
        
        if (diff < min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    for (int i = 0; i < cut_index; i++) {
        cout << nums[i] << endl;
    }
    
    cout << endl;
    
    for (int i = cut_index; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    
    return 0;
}