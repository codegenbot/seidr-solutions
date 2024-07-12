from typing import List


def has_close_elements():
    numbers = []
    while True:
        try:
            num1 = float(input("Enter a number (or 'done' to finish): "))
            if num1 == 'done':
                break
            numbers.append(num1)
        except ValueError:
            print("Invalid input. Please enter a valid number or 'done'.")

    threshold = None
    while True:
        try:
            threshold = float(input("Enter the threshold: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid number.")

    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i + 1] - numbers[i]) <= threshold:
            return False
    return True


print(has_close_elements())