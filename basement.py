```
def basement(nums):
    for i, num in enumerate(nums, 0): 
        if sum(nums[:i+1]) < 0:
            return i
    return -1