def concatenate_with_delimiter(numbers, delimiter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimiter])
    if numbers:
        result.append(numbers[-1])
    return result