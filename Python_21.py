from typing import List

def rescale_to_unit() -> None:
    numbers = input("Enter space-separated float values: ")
    numbers = [float(num) for num in numbers.split()]
    
    min_val = min(numbers)
    max_val = max(numbers)
    
    print([(x - min_val) / (max_val - min_val) for x in numbers])