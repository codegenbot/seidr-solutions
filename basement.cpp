```cpp
int basement(vector<int>& nums) {
    int sum = 0;
    int first_negative_index = -1; 

    for (int i = 0; i < nums.size(); ++i) {
        sum += nums[i];
        if (sum < 0 && first_negative_index == -1) {
            first_negative_index = i;
        }
    }

    return first_negative_index;

}