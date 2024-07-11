def complete_code(numbers, delimiter):
    result = []
    for num in numbers:
        result.append(num)
        result.append(delimiter)
    return result[:-1]