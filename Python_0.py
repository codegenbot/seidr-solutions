numbers.sort()
    for i in range(1, len(numbers)):
        if numbers[i] - numbers[i - 1] < threshold:
            return True
    return False