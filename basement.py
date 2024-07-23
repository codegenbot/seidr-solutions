```
def basement(nums):
    for i, n in enumerate(nums):
        if sum(nums[:i+1]) < 0:
            return i + 1
    return -1