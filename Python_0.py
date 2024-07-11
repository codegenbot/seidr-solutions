def has_close_values(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = list(map(int, input("Enter the numbers separated by spaces: ").split()))
threshold = int(input("Enter the threshold: "))

print(has_close_values(numbers, threshold))