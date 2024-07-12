def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) >= threshold:
            return False
    return True


numbers = list(
    map(int, input("Enter space-separated numbers: ").split())
)  # Accept input from user
threshold = int(input("Enter threshold: "))  # Accept input from user
result = check_numbers(numbers, threshold)
print(result)