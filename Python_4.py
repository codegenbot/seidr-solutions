from typing import List

def mean_absolute_deviation(input_file: str = None) -> float:
    if not input_file:
        numbers = list(map(float, input("Enter numbers separated by spaces or a file name: ").split()))
    else:
        with open(input_file, 'r') as f:
            numbers = list(map(float, f.read().split()))
    
    if not numbers:
        return float('nan')
    
    mean = sum(numbers) / len(numbers)
    mad = sum(abs(num - mean) for num in numbers) / len(numbers)
    return mad