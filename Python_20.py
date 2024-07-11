```
def find_closest_elements(nums: list)-> tuple:
    min_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(nums)):
        for j in range(i+1, len(nums)):
            diff = abs(nums[i] - nums[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (nums[i], nums[j])
    
    return closest_pair

print(find_closest_elements([1.1, 2.2, 3.1, 4.1, 5.1]))