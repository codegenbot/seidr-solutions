```
def basement(nums):
    for i, _ in enumerate(nums):
        total = sum(nums[:i+1])
        if total < 0:
            return i
    return -1