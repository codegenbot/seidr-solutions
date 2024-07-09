def complete_code(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop() if result else None
    return result