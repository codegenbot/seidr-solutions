numbers, threshold = map(int, input("Enter numbers and threshold separated by space: ").split())

def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = numbers.split()
result = check_numbers(numbers, threshold)
print(result)