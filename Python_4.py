```
from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    if not numbers:
        return float('nan')
    
    mean = sum(numbers) / len(numbers)
    mad = sum(abs(num - mean) for num in numbers) / len(numbers)
    return mad if len(numbers) > 0 else float('nan')

def main():
    while True:
        user_input = input("Enter a list of numbers separated by spaces: ")
        try:
            numbers = [float(x) for x in user_input.split()]
            print(mean_absolute_deviation(numbers))
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

if __name__ == "__main__":
    main()