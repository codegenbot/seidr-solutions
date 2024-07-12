def concatenate_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result