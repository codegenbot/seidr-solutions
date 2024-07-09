def format_numbers(numbers, delimiter):
    result = []
    for num in numbers[:-1]:
        result.extend([num, delimiter])
    if numbers:
        result.append(numbers[-1])
    return result


# Call the function with appropriate arguments
result = format_numbers([1, 2, 3, 4, 5], "-")
result