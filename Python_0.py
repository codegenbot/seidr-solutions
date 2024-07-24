def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Input from user
numbers = list(map(int, input().split()))
threshold = int(input())

# Output
print(check_numbers(numbers, threshold))