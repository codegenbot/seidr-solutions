numbers = [int(input()) for _ in range(3)]
threshold = int(input())

def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) >= threshold:
            return False
    return True

result = check_numbers(numbers, threshold)
print(result)