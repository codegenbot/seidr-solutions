def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


numbers = list(
    map(float, input("Enter a list of numbers separated by space: ").split())
)
threshold = 5
result = check_threshold(numbers, threshold)
print(result)