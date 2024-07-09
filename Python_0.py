def check_numbers(numbers, threshold):
    numbers = list(map(int, numbers.split()))
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = input("Enter numbers separated by space: ")
threshold = int(input("Enter threshold value: "))

result = check_numbers(numbers, threshold)
print(result)