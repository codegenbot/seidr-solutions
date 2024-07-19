def format_numbers(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()
    return result