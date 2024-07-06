```Python
from typing import list, float

def has_close_elements():
    numbers = input("Enter space-separated numbers: ")
    numbers = [float(num) for num in numbers.split()]
    
    threshold = float(input("Enter a number to determine close elements: "))

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                return True
    return False

print(has_close_elements())