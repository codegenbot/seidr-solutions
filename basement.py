def basement(nums):
    total = 0
    basement_index = None
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            basement_index = i + 1
            break
    return basement_index