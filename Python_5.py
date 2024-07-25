result = []
    for num in numbers:
        result.extend([num, delimeter])
    result.pop()  # Remove the last delimiter added
    return result