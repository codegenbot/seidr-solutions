def complete_code(numbers, delimiter):
    output = []
    for num in numbers[:-1]:
        output.extend([num, delimiter])
    if numbers:
        output.append(numbers[-1])
    return output