def basement(nums):
    total = 0
    found = None
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            found = i + 1
            break
    return found if found is not None else -1