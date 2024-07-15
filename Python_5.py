def intersperse(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()
    return result

result = intersperse([1, 2, 3], "-")