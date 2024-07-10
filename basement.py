def basement(nums):
    total = 0
    i = 0
    for num in nums:
        total += num
        if total < 0:
            return i + 1
        i += 1
    return -1