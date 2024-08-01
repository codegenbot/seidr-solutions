def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


threshold = int(input("Enter threshold: "))
numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))

result = check_numbers(numbers, threshold)
print(result)