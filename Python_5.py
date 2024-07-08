def join_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([str(num), delimiter])
    result.pop()
    return result