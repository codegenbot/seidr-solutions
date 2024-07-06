```
from typing import List

def has_close_elements() -> str:
    numbers = input("Enter space-separated numbers: ")
    numbers = [float(num) for num in numbers.split()]
    
    threshold = float(input("Enter a number to determine close elements: "))

    close_elements_found = False
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                close_elements_found = True
                break

    return 'Yes' if close_elements_found else 'No'

print(has_close_elements())