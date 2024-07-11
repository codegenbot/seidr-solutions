```
def find_pair(n, nums):
    nums.sort()
    for i in range(len(nums)-1):
        if nums[i+1] + nums[i] == n:
            return f"{nums[i]} {nums[i+1]}": 
    return "No pair found"