```
from typing import List

def mean_absolute_deviation():
    while True:
        numbers = input("Enter a series of space-separated numbers: ").split()
        try:
            numbers = [float(num) for num in numbers]
            if len(numbers) > 0 and all(x > 0 for x in numbers):
                break
            else:
                print("Invalid input. Please enter valid positive numbers.")
        except ValueError:
            print("Invalid input. Please enter space-separated numbers.")

    mean = sum(numbers) / len(numbers)
    return sum(abs(num - mean) for num in numbers) / len(numbers)

print(mean_absolute_deviation())