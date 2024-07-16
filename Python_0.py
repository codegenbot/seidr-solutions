def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = input("Enter numbers separated by space: ").split()
numbers = [int(num) for num in numbers]
threshold = 5
result = check_threshold(numbers, threshold)
print(result)