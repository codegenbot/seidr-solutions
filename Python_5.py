def generate_result(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

input_numbers = [1, 2, 3]
output = generate_result(input_numbers, ',')
print(output)