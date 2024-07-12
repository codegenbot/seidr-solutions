```
from typing import List

def has_close_elements():
    numbers = input("Enter a list of floating point numbers separated by space: ")
    numbers = list(map(float, numbers.split()))
    threshold = float(input("Enter the threshold value: "))
    
    numbers = sorted(set(numbers))
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i+1]) <= threshold:
            return True
    return False

print(has_close_elements())