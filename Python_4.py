from typing import List

def mean_absolute_deviation() -> float:
    numbers = [float(num) for num in input("Enter space-separated numbers: ").split()]
    if len(numbers) == 0:
        return sum(numbers) / len(numbers)
    
    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)

print(mean_absolute_deviation())