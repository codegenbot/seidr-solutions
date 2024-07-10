def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            continue
        while total > 0 and i + 1 < len(nums):
            total -= nums[i+1]
            i += 1
    return total < 0 and i + 1 or -1