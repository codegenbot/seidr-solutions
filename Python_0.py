def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

input_data = input().split()
numbers = [int(x) for x in input_data[:-1]]
threshold = int(input_data[-1])

result = check_numbers(numbers, threshold)
print(result)