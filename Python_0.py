def check_numbers(numbers, threshold): 
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

threshold = 5
numbers = [1, 6, 10, 4]
result = check_numbers(numbers, threshold)
print(result)