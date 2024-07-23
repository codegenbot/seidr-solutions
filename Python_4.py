from typing import List
import statistics

def mean_absolute_deviation() -> float:
    while True:
        numbers_str = input("Enter comma-separated float values (e.g., 1,2,3): ")
        
        try:
            numbers_list = [float(num) for num in numbers_str.split(",")]
            break
        except ValueError:
            print("Invalid input. Please enter comma-separated float values.")
    
    avg = statistics.mean(numbers_list)
    return statistics.mean([abs(num - avg) for num in numbers_list])

if __name__ == "__main__":
    print(mean_absolute_deviation())