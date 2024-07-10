def basement(nums):
    total = 0
    found_basement = False
    for i, num in enumerate(nums):
        total += num
        if total < 0 and not found_basement:
            return i + 1
        elif total < 0:
            found_basement = True