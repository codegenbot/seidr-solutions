def basement(nums):
    total = 0
    found_negative_sum = False
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            found_negative_sum = True
            break
    return -1 if not found_negative_sum else i