def process_numbers(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop() if result else None
    return result

# Call the function with appropriate arguments