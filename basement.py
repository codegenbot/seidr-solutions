def basement(nums):
    total = 0
    first_negative = -1
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            if first_negative == -1:
                first_negative = i
            else:
                return first_negative
    return -1