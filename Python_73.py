def smallest_change(arr):
    count = 0
    for a, b in zip(arr, [x if x < y else y for x, y in zip(arr, arr[::-1])]):
        if a != b:
            count += 1
    return count