```
from typing import List
import statistics

def mean_absolute_deviation() -> float:
    while True:
        numbers_str = input("Enter comma-separated float values (e.g., 1,2,3), or 'stop' to exit: ")
        
        if numbers_str.lower() == 'stop':
            break
        
        try:
            numbers_list = [float(num) for num in numbers_str.split(",")]
            return statistics.mean([abs(num - statistics.mean(numbers_list)) for num in numbers_list])
        except ValueError:
            print("Invalid input. Please enter comma-separated float values.")
    
    if not any(map(str.isalpha, numbers_str)):
        print("No valid numbers were provided.")
    else:
        print(f"Mean Absolute Deviation is: {mean_absolute_deviation()}")
        
print(mean_absolute_deviation())