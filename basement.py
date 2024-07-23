def basement(numbers):
    total = 0
    for i in range(len(numbers)):
        total += numbers[i]
        if total < 0:
            return i + 1
    return -1