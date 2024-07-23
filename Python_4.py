from typing import List
import statistics

def mean_absolute_deviation() -> float:
    numbers_str = input("Enter comma-separated float values: ")
    numbers_list = [float(num) for num in numbers_str.split(",")]
    
    if not numbers_list:
        return 0
    
    avg = statistics.mean(numbers_list)
    return statistics.mean([abs(num - avg) for num in numbers_list])

print(mean_absolute_deviation())