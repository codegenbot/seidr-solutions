def basement(numbers):
    total = 0
    for i, num in enumerate(numbers):
        total += num
        if total < 0:
            return i + 1
    return -1