#include <iostream>
#include <vector>

using namespace std;

bool pairs_sum_to_zero(vector<int> l){
    for(int i = 0; i < l.size(); i++){
        for(int j = i+1; j < l.size(); j++){
            if(l[i] + l[j] == 0){
                return true;
            }
        }
    }
    return false;
}

int main() {
    // Test cases
    vector<int> nums1 = {1, 2, 3, -2, -3};
    vector<int> nums2 = {1, 2, 3, 4, 5};
    vector<int> nums3 = {0, 5, -5, 2, -2};
    
    // Function calls
    cout << pairs_sum_to_zero(nums1) << endl;  // true
    cout << pairs_sum_to_zero(nums2) << endl;  // false
    cout << pairs_sum_to_zero(nums3) << endl;  // true
    
    return 0;
}