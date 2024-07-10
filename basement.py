```
def basement(nums):
    for i, num in enumerate(nums):
        if sum(nums[:i+1]) < 0:
            return i
    return -1