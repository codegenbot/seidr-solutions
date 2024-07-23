from typing import List
import statistics

from typing import List
import statistics

def mean_absolute_deviation() -> float:
    while True:
        numbers_str = input("Enter comma-separated float values: ")
        numbers_list = [float(num) for num in numbers_str.split(",")]
        
        if all(isinstance(num, (int, float)) for num in numbers_list):
            break
        print("Invalid input. Please enter comma-separated float values.")
    
    avg = statistics.mean(numbers_list)
    return statistics.mean([abs(num - avg) for num in numbers_list])

print(mean_absolute_deviation())