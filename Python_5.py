def join_with_delimiter(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([str(num), delimiter])
    result.pop() if result else None
    return result