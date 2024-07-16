#include <vector>
using namespace std;

vector<int> cutVector(vector<int>& nums) {
    int min_diff = INT_MAX;
    int cut_index = 0;
    
    for(int i = 1; i < nums.size(); i++) {
        int diff = abs(nums[i] - nums[0]);
        if(diff <= min_diff) {
            min_diff = diff;
            cut_index = i;
        }
    }
    
    return {vector<int>(nums.begin(), nums.begin() + cut_index), vector<int>(nums.begin() + cut_index, nums.end())};
}

int main() {
    // test the function
    vector<int> nums1 = {1};
    vector<int> result1 = cutVector(nums1);
    for(int num : result1) cout << num << " ";
    cout << endl;
    
    vector<int> nums2 = {1, 10};
    vector<int> result2 = cutVector(nums2);
    for(int num : result2) cout << num << " ";
    cout << endl;
    
    vector<int> nums3 = {1, 100};
    vector<int> result3 = cutVector(nums3);
    for(int num : result3) cout << num << " ";
    cout << endl;
    
    vector<int> nums4 = {1, 1000};
    vector<int> result4 = cutVector(nums4);
    for(int num : result4) cout << num << " ";
    cout << endl;
    
    vector<int> nums5 = {1, 10000};
    vector<int> result5 = cutVector(nums5);
    for(int num : result5) cout << num << " ";
    cout << endl;
    
    return 0;
}