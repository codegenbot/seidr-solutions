from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) <= threshold:
            return True
    return False

def has_close_elements() -> None:
    while True:
        try:
            numbers = input("Enter a list of floating point numbers separated by space: ")
            numbers = [float(num) for num in numbers.split()]
            if len(numbers) < 2:
                raise ValueError
            threshold = float(input("Enter the threshold value: "))
            print(has_close_elements([*numbers], threshold))
            break
        except ValueError:
            print("Invalid input. Please enter at least two valid floating point numbers and a single valid threshold value.")