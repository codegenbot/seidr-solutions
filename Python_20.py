```python
def find_closest_elements(nums):
    nums.sort()
    closest_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(nums) - 1):
        diff = nums[i+1] - nums[i]
        if diff < closest_diff:
            closest_diff = diff
            closest_pair = (nums[i], nums[i+1])
            
    return closest_pair

print(find_closest_elements(map(int, input("Enter numbers: ").split())))