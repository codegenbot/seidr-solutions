def basement(nums):
    total = 0
    index = 0
    for num in nums:
        total += num
        if total < 0:
            return index + 1
        index += 1
    return -1