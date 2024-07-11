def basement(nums):
    total = 0
    found_basement_index = None
    for i, num in enumerate(nums):
        total += num
        if total < 0:
            found_basement_index = i + 1
            break
    return found_basement_index