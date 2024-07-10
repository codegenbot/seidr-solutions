```
def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            continue
        if total == -1:
            return 0
    return -1