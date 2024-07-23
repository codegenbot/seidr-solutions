```
from typing import List
import statistics

def mean_absolute_deviation() -> float:
    while True:
        numbers_str = input("Enter comma-separated float values (e.g., 1,2,3): ")
        
        try:
            numbers_list = [float(num) for num in numbers_str.split(",")]
            if len(numbers_list) < 2:
                return statistics.mean(numbers_list)
            result = statistics.mean([abs(num - statistics.mean(numbers_list)) for num in numbers_list])
            return result
        except ValueError:
            print("Invalid input. Please enter comma-separated float values.")
    
print(mean_absolute_deviation())