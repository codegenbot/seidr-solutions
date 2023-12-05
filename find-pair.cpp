[PYTHON]
void find_pair(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    while (left < right) {
        if (nums[left] + nums[right] == target) {
            return {nums[left], nums[right]};
        } else if (nums[left] + nums[right] < target) {
            left++;
        } else {
            right--;
        }
    }
    return {};
}
[/PYTHON]
[TESTS]
# Test case 1:
assert find_pair({1, 2, 3, 4, 5}, 6) == {1, 5};
# Test case 2:
assert find_pair({1, 2, 3, 4, 5}, 10) == {};
# Test case 3:
assert find_pair({}, 10) == {};
[/TESTS]

```