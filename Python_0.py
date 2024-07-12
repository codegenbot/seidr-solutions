def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) >= threshold:
            return False
    return True

numbers = list(map(int, input().strip().split('\n')))  # Split input into a list of numbers
threshold = int(input())
result = check_numbers(numbers, threshold)
print(result)