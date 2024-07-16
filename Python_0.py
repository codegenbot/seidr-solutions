def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = [int(num) for num in input("Enter numbers separated by spaces: ").strip().split()]
threshold = 5
result = check_threshold(numbers, threshold)
print(result)