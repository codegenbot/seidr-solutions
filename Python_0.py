```
from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(1, len(numbers)):
        if abs(numbers[i] - numbers[i - 1]) <= threshold:
            return True
    return False


numbers = input("Enter the list of numbers separated by space: ")
threshold = float(input("Enter the threshold value: "))

numbers_list = [float(i) for i in numbers.split()]
print(has_close_elements(numbers_list, threshold))