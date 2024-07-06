```python
from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(1, len(numbers)):
        if abs(numbers[i] - numbers[i-1]) <= threshold:
            return True
    return False

numbers = input("Please enter a list of numbers (comma-separated): ")
numbers = [float(num) for num in numbers.split(",")]
threshold = float(input("Enter a threshold value: "))

result = has_close_elements(numbers, threshold)

if result:
    print("The list contains close elements.")
else:
    print("The list does not contain close elements.")