from typing import List


def rescale_to_unit():
    numbers = input("Enter the numbers separated by space: ").split()
    numbers = [float(num) for num in numbers]
    
    min_val = min(numbers)
    max_val = max(numbers)
    
    return [(x - min_val) / (max_val - min_val) for x in numbers]

print(rescale_to_unit())