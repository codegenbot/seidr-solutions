def basement(nums):
    total = 0
    for i, n in enumerate(nums):
        total += n
        if total < 0:
            continue
        while total >= 0:
            total -= nums[i]
            i += 1
    return i + 1 if total < 0 else -1