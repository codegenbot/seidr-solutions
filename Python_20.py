```
def find_closest_elements(nums: list)-> tuple:
    nums.sort()
    min_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(nums)-1):
        diff = nums[i+1] - nums[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (nums[i], nums[i+1])
    
    return closest_pair

if __name__ == "__main__":
    print(find_closest_elements([1.1, 2.2, 3.1, 4.1, 5.1]))