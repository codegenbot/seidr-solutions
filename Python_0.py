from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i + 1] - numbers[i]) <= threshold:
            return False
    return True

numbers = []
while True:
    try:
        num1 = input("Enter a number (or 'done' to finish): ")
        if num1 == 'done':
            break
        numbers.append(float(num1))
    except ValueError:
        print("Invalid input. Please enter a valid number or 'done'.")

if len(numbers) < 2:
    print("You need to enter at least two numbers.")
else:
    threshold = None
    while True:
        try:
            threshold = float(input("Enter the threshold: "))
            break
        except ValueError:
            print("Invalid input. Please enter a valid number.")

    print(has_close_elements(numbers, threshold))