def complete_code(numbers, delimeter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimeter])
    if numbers:
        result.append(numbers[-1])
    return result