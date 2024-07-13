```Python
def basement(nums):
    for i, num in enumerate(nums, 1):
        if sum(nums[:i]) < 0:
            return i
    return -1