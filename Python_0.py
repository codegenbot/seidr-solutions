from typing import List


def has_close_elements() -> List[bool]:
    numbers = []
    while True:
        try:
            num1 = float(input("Enter a number (or 'done' to finish): "))
            if num1 == "done":
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
    result = [True]
    for i in range(len(numbers) - 1):
        if abs(numbers[i + 1] - numbers[i]) <= threshold:
            result.append(False)
        else:
            result.append(True)
    return result