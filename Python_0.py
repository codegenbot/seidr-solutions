def has_close_values(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

try:
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
    threshold = int(input("Enter threshold: "))
except ValueError:
    print("Invalid input. Please enter numbers separated by space and threshold as an integer.")
else:
    print(has_close_values(numbers, threshold))