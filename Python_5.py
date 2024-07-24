def intersperse(numbers, delimeter):
    result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()
    return result

def process_numbers(numbers, delimeter):
    return intersperse(numbers, delimeter)