def has_close_values(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


numbers = list(map(int, input("Enter numbers separated by space: ").split()))
threshold = int(input("Enter threshold: "))

print(has_close_values(numbers, threshold))