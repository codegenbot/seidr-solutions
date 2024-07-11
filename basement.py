```
def basement(nums):
    total = 0
    i = -1
    for n in nums:
        i += 1
        total += n
        if total < 0:
            return i + 1
    return -1