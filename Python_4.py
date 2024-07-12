```
from typing import List

def mean_absolute_deviation():
    numbers = input("Enter a series of space-separated numbers: ").split()
    if len(numbers) < 2:
        return None
    try:
        numbers = [float(num) for num in numbers if num != '' and all(char.isspace() or char.isdigit() + '.'.join('0123456789-') for char in num)]
        if not numbers or any(x <= 0 for x in numbers):
            return None  
        mean = sum(numbers) / len(numbers)
        return sum(abs(num - mean) for num in numbers) / len(numbers)
    except ZeroDivisionError:
        return None  
    except TypeError:
        return None

print(mean_absolute_deviation())