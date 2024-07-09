def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

input_numbers = input("Enter numbers separated by space: ")
try:
    numbers = [int(x) for x in input_numbers.split()]
except ValueError:
    print("Invalid input format. Please provide space-separated numbers.")
    exit()

threshold = int(input("Enter threshold value: "))

result = check_numbers(numbers, threshold)
print(result)