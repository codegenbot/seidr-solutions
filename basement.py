def basement(nums):
    total = 0
    seen_negative = False
    for i, n in enumerate(nums):
        total += n
        if total < 0:
            if not seen_negative:
                return i + 1
            else:
                continue
        elif total == 0:
            seen_negative = False
    return -1