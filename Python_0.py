def check_numbers(numbers, threshold):
    count = len([num for num in numbers if num > threshold])
    return count


numbers = []
while True:
    try:
        num = input("Enter a number (or 'STOP' to end): ").strip()
        if num == "STOP":
            break
        numbers.append(int(num))
    except ValueError:
        print("Invalid input. Please enter a valid number.")

threshold = 0
while True:
    try:
        threshold = int(input("Enter a threshold number: ").strip())
        break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

output = check_numbers(numbers, threshold)
print(output)