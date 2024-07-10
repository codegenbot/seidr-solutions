def basement(nums):
    total = 0
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            continue
        if total == 0:
            break
    return i - 1 if i > 0 else -1