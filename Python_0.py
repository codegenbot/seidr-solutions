numbers = [float(x) for x in input("Enter numbers (comma-separated): ").strip().split(",")]
threshold = float(input("Enter threshold: "))

def has_close_elements(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if float(numbers[i]) - float(numbers[i + 1]) <= threshold:
            return True
    return False

print(has_close_elements(numbers, threshold))