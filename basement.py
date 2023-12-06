def first_negative_index(arr):
    total = 0
    for i, num in enumerate(arr):
        total += num
        if total < 0:
            return i
    return None