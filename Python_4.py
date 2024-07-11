```
from typing import List

def mean_absolute_deviation():
    numbers = input("Enter numbers separated by space: ").split()
    
    try:
        numbers = [float(num) for num in numbers]
        
        if not numbers:
            return float('nan')
        
        mean = sum(numbers) / len(numbers)
        mad = sum(abs(num - mean) for num in numbers) / len(numbers)
        return mad if len(numbers) > 0 else float('nan')
    except ValueError:
        return "Invalid input. Please enter only numbers."

print(mean_absolute_deviation())