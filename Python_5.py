def insert_delimiter(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()  # Remove the last delimiter
    return result