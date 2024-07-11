def complete_code(numbers, delimiter):
    numbers = numbers.split()
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimiter])
    if numbers:
        result.append(numbers[-1])
    return result