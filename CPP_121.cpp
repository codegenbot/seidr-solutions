#include <vector>

int solutions(vector<int> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    // Test Case 1
    vector<int> nums1 = {1, 2, 3, 4, 5};
    int result1 = solutions(nums1);
    // Test Case 2
    vector<int> nums2 = {2, 4, 6, 8, 10};
    int result2 = solutions(nums2);
    // Test Case 3
    vector<int> nums3 = {1, 3, 5, 7, 9};
    int result3 = solutions(nums3);
    
    return 0;
}