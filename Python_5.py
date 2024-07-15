def generate_result(numbers, delimiter):
    result = []
    for num in numbers:
        result.extend([num, delimiter])
    result.pop()
    return result

numbers = [1, 2, 3, 4, 5]
delimiter = ","
output = generate_result(numbers, delimiter)
print(output)