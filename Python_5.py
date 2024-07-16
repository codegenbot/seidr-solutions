def concat_numbers_with_delimiter(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()  # Remove extra delimiter at the end
    return result