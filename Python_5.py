def create_string(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([str(num), delimiter])
    result.pop()
    return ''.join(result)