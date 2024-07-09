def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

inputs = input().split()
numbers = [int(x) for x in inputs[:-1]]
threshold = int(inputs[-1])

result = check_numbers(numbers, threshold)
print(result)