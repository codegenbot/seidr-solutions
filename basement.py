def basement(numbers):
    total = 0
    for i, num in enumerate(numbers):
        total += num
        if total < 0:
            return i
    return -1