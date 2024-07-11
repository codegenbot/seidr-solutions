def has_close_values(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = list(map(int, input().split()))
threshold = int(input())

print(has_close_values(numbers, threshold))