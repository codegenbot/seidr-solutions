def process_numbers(numbers, delimiter):
    result = []
    for number in numbers:
        result.extend([number, delimiter])
    result.pop()
    return result