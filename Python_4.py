from typing import List

def mean_absolute_deviation(numbers: List[float]) -> float:
    mean = sum(numbers) / len(numbers)
    deviation = sum(abs(num - mean) for num in numbers) / len(numbers)
    return deviation

while True:
    numbers = input("Enter the numbers: ").split()
    if numbers:
        try:
            numbers = list(map(float, numbers))
            if len(numbers) > 1:
                break
            else:
                print("At least two numbers should be entered.")
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")
    else:
        print("No numbers entered. Please try again.")

result = mean_absolute_deviation(numbers)
print(result)